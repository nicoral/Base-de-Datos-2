#include "includes.h"
#include "Select.h"
#include "EArbol.h"




/**void indices(string carpeta,int cantidadC,int PosiIndice)*/
void indices(string carpeta)
{
    if(carpeta=="job_events")
    {
        job_events A;
        A.indicesJE();
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        A.indicesMA();
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        A.indicesME();
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        A.indicesTC();
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        A.indicesTE();
    }
    else
        cout<<"No se tiene la tabla a buscar."<<endl;
}

string select(string ID,string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        job_events A;
        respuesta=A.selectJE(ID);
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        respuesta=A.selectMA(ID);
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        respuesta=A.selectME(ID);
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        respuesta=A.selectTC(ID);
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        respuesta=A.selectTE(ID);
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}
void swapi(pair<long long int,long long int> &a,pair<long long int,long long int> &b){
    pair<long long int,long long int> temp;
    temp=a;
    a=b;
    b=temp;
}
void insertSort(vector<pair<long long int,long long int>> &v,int ini,int fin)
{
    int j, temp,tam=v.size();
	for (int i=0;i<tam; i++)
    {
		j = i;
		while (j>0 && v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
    }
}
void indicesOrde(string nombre)
{
    char* n1=new char[1000];
    char* n2=new char[1000];
    pair<long long int,long long int> tem;
    long long int n,y;
    vector<pair<long long int,long long int> > vec;
    ifstream is("indices/machine_attributes.txt",std::fstream::binary);

    if (!is)
    {
        cout<<"Error al abrir el archivo"<<endl;
    }
    else
    {
        while(!is.eof())
        {
            is.getline(n1,10000,',');
            if(n1=="DIVISION")
                is.getline(n1,10000);
            else
            {
                n=atoll(n1);
                is.getline(n2,10000);
                tem.first=n;
                y=atol(n2);
                tem.second=y;
                vec.push_back(tem);
            }
        }
    }
    insertSort(vec,0,vec.size());
    for(int i=0;i<vec.size();i++)
        cout<<vec[i].first<<","<<vec[i].second<<endl;
}
int main()
{
    ///indices("machine_events");
    ///indicesOrde("nana");

    cout<<select("4246147567","machine_events");
    /**long long a;
    char nume[16]="6176871439";
    a=atoll(nume);
    cout<<a;*/
    /**insertar2(indice,"4865","894","1561");
    insertar2(indice,"4891","484","1561");
    insertar2(indice,"2313","12313","1231");
    insertar2(indice,"1231","32131","12313");
    */
    ///imprimir(tem);
    return 0;
}

