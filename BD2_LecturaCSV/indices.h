#include "Tablas.h"
void task_events::indices2TE()
{
    vector<long int> PrinIndices;
    string cant=numero(this->cantidad);
    char *linea=new char[1000];
    long int posi=0,posicion;
    ofstream indi("indices/"+this->archivo+"/"+this->archivo+".txt");
    ofstream Pindi("indices/"+this->archivo+"/P"+this->archivo+".txt");
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+cant+".csv");
        ifstream archivo (url,std::fstream::binary);
        posicion=archivo.tellg();
        while(!archivo.eof())
        {
            if(posi!=this->indice)
            {
                archivo.getline(linea,1000,',');
                posi++;
            }
            else
            {
                indi<<linea<<','<<posicion<<endl;
                archivo.getline(linea,1000);
                posicion=archivo.tellg();
                posi=0;
            }
        }
    }
}
void task_events::indicesTE()
{
    char *linea=new char[1000];
    string cant=numero(this->cantidad);
    long int posi=0,posicion;
    ofstream indi("indices/"+this->archivo+".txt");
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+cant+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             break;
        }
        else
        {
            posicion=archivo.tellg();
            while(!archivo.eof())
            {

                if(posi!=this->indice)
                {

                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    indi<<linea<<','<<posicion<<endl;
                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
	indi.close();
}
void task_constraints::indicesTC()
{
    char *linea=new char[1000];
    long int posi=0,posicion,cont=0;
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
    long int posi=0,posicion,cont=0;
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
void machine_attributes::indicesMA()
{
    char *linea=new char[1000];
    long int posi=0,posicion,cont=0;
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
    long int posi=0,posicion,cont=0;
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



