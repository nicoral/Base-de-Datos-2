#include <sstream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <string>
//#include <windows.h>

#include "EArbol.h"


string numero(int n)
{
    vector<char> hola={'0','0','0','0','0'};
    vector<int> nums;
    string num{""};
    char nchar;
    if(n<=9)
    {
        nchar=n+48;
        hola[hola.size()-1]=nchar;
    }
    else
    {
        if(n<=99)
        {
            for(int i=0;i<2;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=999)
        {
            for(int i=0;i<3;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=9999)
        {
            for(int i=0;i<4;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=99999)
        {
            for(int i=0;i<5;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
    }
    for(auto n:hola) num+=n;
    return num;
}
const vector<string> explode(const string& linea,int indi)
{
	string buff{""};
	vector<string> v;
    const char& c=',';
    int cont=0;
	for(int i=0;i<linea.length() && cont<=indi;i++)
	{
		if(linea[i]!= c) buff+=linea[i];
		if(linea[i] == c && buff != "") { v.push_back(buff); buff = "";cont++; }
		if(linea[i] == c && linea[i-1]==c){v.push_back("0");cont++;}
	}
	if(buff != "") v.push_back(buff);

	return v;
}
const vector<string> explodeFull(const string& linea)
{
	string buff{""};
	vector<string> v;
    const char& c=',';
	for(int i=0;i<linea.length();i++)
	{
		if(linea[i]!= c) buff+=linea[i];
		if(linea[i] == c && buff != "") { v.push_back(buff); buff = ""; }
		if(linea[i] == c && linea[i-1]==c){v.push_back("0");}
	}
	if(buff != "") v.push_back(buff);

	return v;
}
void indices(string carpeta,int cantidadC,int PosiIndice)
{
    char *linea=new char[1000];
    string cant=numero(cantidadC);
    long int posi=0,posicion;
    ofstream indi("indices/"+carpeta+".txt");
    for(int i=0;i<cantidadC;i++)
    {
        string num=numero(i);
        string url=("google/"+carpeta+"/part-"+num+"-of-"+cant+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             break;
        }
        else
        {
            while(!archivo.eof())
            {
                if(posi!=PosiIndice)
                {
                    posicion=archivo.tellg();
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    indi<<linea<<','<<posicion<<endl;
                    archivo.getline(linea,1000);
                    posi=0;
                }
            }
            posi=0;
            indi<<"DIVISION,"<<endl;
        }
    }
	indi.close();
}

char *select(string ID,int PosiIndice,string archivo,int cant)
{
    char *linea=new char[10000];
    int indice=2,divi=0,posi=0;
    string ids;
    ifstream csv("indices/"+archivo+".txt",std::fstream::binary);
    if (!csv)
    {
        cout<<"Error al abrir el archivo"<<endl;
    }
    else
    {
        while(!csv.eof())
        {
            csv.getline(linea,10000,',');
            ids=linea;
            if(ID==ids)
            {
                csv.getline(linea,10000);
                break;
            }
            else if(ids=="DIVISION")
                divi++;
            else
                csv.getline(linea,10000);
        }
        ifstream is("google/"+archivo+"/part-"+numero(divi)+"-of-"+numero(cant)+".csv",std::fstream::binary);
        if (!csv)
        {
            cout<<"Error al abrir el archivo"<<endl;
        }
        else
        {
            int n=atoll(linea);
            is.seekg(n,ios::beg);
            ///is.getline(linea,1000);
            is>>linea;
            return linea;
        }
        return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
    }
}
void *insertar(string archivo,int cant,string datos)
{
    char *linea=new char[10000];
    int indice=2,divi=0,posi=0;
    string ids;
        ofstream is("google/"+archivo+"/part-"+numero(divi)+"-of-"+numero(cant)+".csv",std::fstream::app);
        if (!is)
        {
            cout<<"Error al abrir el archivo"<<endl;
        }
        else
        {
            is<<datos;
          //  cout<<"Se inserto"<<endl;
        }
}

int main()
{
    //indices("machine_events",1,2);
    //cout<<select("3418309",3,"task_events",500);
    //cout<<select("100",45,"machine_attributes",1);
    //cout<<select("100",45,"machine_events",1);
    insertar("machine_events",1,"100,34,5,willito,0.5,0.454\n");
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

