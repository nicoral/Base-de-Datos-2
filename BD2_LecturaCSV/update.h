#include "Select.h"

string job_events::update(string ID,string C2)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    int divi=0;
    string ids;
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
            else if(ID>ids)
            {
                break;
            }
            else
                HashKey.getline(linea,10000);
        }
    }
}
string machine_attributes::update(string ID,string C2)
{

}
string machine_events::update(string ID,string C2)
{

}
string task_constraints::update(string ID,string C2)
{

}
string task_events::update(string ID,string C2)
{

}
