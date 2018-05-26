#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;
vector<string> indice;



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
const vector<string> explode(const string& linea)
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
    string linea;
    ofstream indi("indices/"+carpeta+".txt", ofstream::out);
    bool prueba=true;
    for(int i=0;i<cantidadC;i++)
    {
        string url=("google/"+carpeta+"/part-"+numero(i)+"-of-"+numero(cantidadC)+".csv");
        ifstream archivo (url);
        if (archivo == NULL)
        {
             printf("Error al abrir el archivo");
        }
        else
        {
            indice.push_back("----------DIVISION-------------");
            while(true)
            {
                getline(archivo,linea,'\n');
                if(linea=="")break;
                vector<string> v{explode(linea)};
                indice.push_back(v[PosiIndice]);
            }
        }
        for(auto n:indice) indi<<n<<endl;
        indice.clear();
    }
	indi.close();
}

int main()
{
    indices("job_events",500,2);



    return 0;
}

