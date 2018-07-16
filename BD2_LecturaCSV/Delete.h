#include "Bloqueos.h"

string machine_events::Delete(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    string ids,url;
    bool encontrado=false;
    ifstream HashKey("indices/HashKey-"+this->archivo+".txt");
    if (!HashKey)
    {

        return ("No se encuentra la tabla a buscar");
    }
    else
    {
        while(!HashKey.eof())
        {
            HashKey.getline(linea,10000,',');
            ids=linea;
            if(ID==ids)
            {
                HashKey.getline(linea,10000);
                encontrado=true;
                break;
            }
            else
                HashKey.getline(linea,10000);
        }
    }
    if(encontrado)
    {
        long long int n=atoi(linea),s;
        url="indices/"+this->archivo+".txt";
        ifstream csv(url);
        csv.seekg(n,ios::beg);
        csv.getline(linea,10000,',');
        if(ID==linea)
        {

            csv.getline(linea,1000,',');
            csv.getline(seg,1000);
            n=atoll(linea);
            s=atoi(seg);
            fstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",ios::in|ios::out);
            if(is!=NULL)
            {
                is.seekg(n,ios::beg);
                is.getline(linea,1000);
                int t=strlen(linea);
                is.seekg(n,ios::beg);
                for(int i=0;i<t;i++)
                {
                    is<<' ';
                }
                return "Linea eliminada";
            }
            else
            {
                return "no se pudo realizar la operacion";
            }
        }
    }
    else
    {
        return "Indice no encontrado en la tabla";
    }
}
string machine_attributes::Delete(string ID)
{

}
string job_events::Delete(string ID)
{

}
string task_constraints::Delete(string ID)
{

}
string task_events::Delete(string ID)
{

}
