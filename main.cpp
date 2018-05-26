#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

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
vector<string> indices()
{
    vector<string> indice;
    string linea;
    bool prueba=true;
    ifstream archivo ("google/part-00000-of-00500.csv");
	if (archivo == NULL)
    {
         printf("Error al abrir el archivo");
    }
    else
    {
        while(true)
        {
            getline(archivo,linea,'\n');
            if(linea=="")break;
            vector<string> v{explode(linea)};
            indice.push_back(v[2]);
        }
    }
    return indice;
}
int main()
{
	vector<string> indice;
	indice=indices();
    for(auto n:indice)cout<<n<<endl;
    return 0;
}

