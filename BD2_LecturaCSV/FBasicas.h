#include "includes.h"

string numero(int n)
{
    vector<char> hola={'0','0','0','0','0'};
    vector<int> nums;
    string num="";
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
