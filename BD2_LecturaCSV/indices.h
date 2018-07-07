#include "Tablas.h"

void task_events::indicesTE()
{
    char *linea=new char[1000];
    long int posi=0,posicion,cont=0;
    int c=0;
    vector<Datos> ID;
    ID.shrink_to_fit();
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
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
                    if(ID.size()>33461309)
                    {
                        sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
                        ofstream indi("indices/"+this->archivo+"-"+numero(c)+".txt");
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
    ofstream indi("indices/"+this->archivo+"-"+numero(c)+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
}
void task_constraints::indicesTC()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
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
                if(posi!=this->indice)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    long long int dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    ID.push_back(neew);
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
}
void machine_events::indicesME()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    long long int dato,temp=0;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
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
                if(posi!=this->indice)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    ID.push_back(neew);
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
	ifstream indic("indices/"+this->archivo+".txt",std::fstream::binary);
	ofstream HashKeys ("indices/HashKey-"+this->archivo+".txt");
	while(!indic.eof())
    {
        posicion=indic.tellg();
        indic.getline(linea,1000,',');
        dato=atoll(linea);
        if(temp!=dato && temp<dato)
        {
            temp=dato;

            HashKeys<<temp<<','<<posicion<<endl;
        }
        indic.getline(linea,1000);
    }
    indic.close();
    HashKeys.close();
}
void machine_attributes::indicesMA()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
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
                if(posi!=this->indice)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    long long int dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    ID.push_back(neew);
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
}
void job_events::indicesJE()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
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
                if(posi!=this->indice)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    long long int dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    ID.push_back(neew);
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
	indi.close();
}



