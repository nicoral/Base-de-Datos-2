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

struct datos
{
    long long int ID;
    int Posicio;
    int PArchivo;
};
void indicesX(string carpeta)
{
    char *linea=new char[1000];
    long int posi=0,posicion,cont=0;
    int c=0;
    vector<Datos> ID;
    vector<long int> posicione;
    vector<long int> Aposicione;
    priority_queue<Datos, vector<Datos>,less<vector<Datos>::value_type> > pqdatos1;
    for(int i=0;i<500;i++)
    {
        cout<<ID.size()<<endl;
        string num=numero(i);
        string url=("google/"+carpeta+"/part-"+num+"-of-00500.csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             break;
        }
        else
        {
            posicion=archivo.tellg();
            while(!archivo.eof() )
            {
                if(posi!=3)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    long long int dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    ID.push_back(neew);
                    if(ID.size()>20000000)
                    {
                        cout<<"entro aqui"<<endl;
                        sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
                        ofstream indi("indices/N"+carpeta+"-"+numero(c)+".txt");
                        for(int i=0;i<ID.size();i++)
                            indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
                        indi.close();
                        ID.clear();
                        c++;
                    }
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
     sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/N"+carpeta+"-"+numero(c)+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
}


int main()
{
    ///indicesX("task_events");
    int opc;
    while(true)
    {
        cin>>opc;
        if(opc==3)
        {
            string archivo;
            cin>>archivo;
            indices(archivo);
        }
        if(opc==1)
        {
            break;
        }
    }

    return 0;
}

