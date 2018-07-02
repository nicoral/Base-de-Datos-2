#include "Tablas.h"

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
void machine_events::indicesME()
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
void machine_attributes::indicesMA()
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
void job_events::indicesJE()
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



