#include "indices.h"


char *job_events::selectJE(string ID)
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
            else
                HashKey.getline(linea,10000);
        }
        if(encontrado)
        {
            string res;
            long int n=atoi(linea),s;
            ifstream csv("indices/"+this->archivo+".txt");
            csv.seekg(n,ios::beg);
            csv.getline(linea,10000,',');
            while(ID==linea)
            {
                csv.getline(linea,1000,',');
                csv.getline(seg,1000);
                n=atoi(linea);
                s=atoi(seg);
                ifstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                is.seekg(n,ios::beg);
                is.getline(linea,1000);
                cout<<linea<<endl;
                csv.getline(linea,1000,',');
            }
            return "Seleccion hecha correctamente :3";
        }
        else
        {
            return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
        }

    }
}
char *machine_attributes::selectMA(string ID)
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
            else
                HashKey.getline(linea,10000);
        }
        if(encontrado)
        {
            string res;
            long int n=atoi(linea),s;
            ifstream csv("indices/"+this->archivo+".txt");
            csv.seekg(n,ios::beg);
            csv.getline(linea,10000,',');
            while(ID==linea)
            {
                csv.getline(linea,1000,',');
                csv.getline(seg,1000);
                n=atoi(linea);
                s=atoi(seg);
                ifstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                is.seekg(n,ios::beg);
                is.getline(linea,1000);
                cout<<linea<<endl;
                csv.getline(linea,1000,',');
            }
            return "Seleccion hecha correctamente :3";
        }
        else
        {
            return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
        }

    }
}
string machine_events::selectME(string ID)
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
            cout<<ids<<" "<<ID<<endl;
            if(ID==ids)
            {
                HashKey.getline(linea,10000);
                encontrado=true;
                break;
            }
            else
                HashKey.getline(linea,10000);
        }
        if(encontrado)
        {
            string res;
            long int n=atoi(linea),s;
            ifstream csv("indices/"+this->archivo+".txt");
            csv.seekg(n,ios::beg);
            csv.getline(linea,10000,',');
            while(ID==linea)
            {
                csv.getline(linea,1000,',');
                csv.getline(seg,1000);
                n=atoi(linea);
                s=atoi(seg);
                ifstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                is.seekg(n,ios::beg);
                is.getline(linea,1000);
                cout<<linea<<endl;
                csv.getline(linea,1000,',');
            }
            return "Seleccion hecha correctamente :3";
        }
        else
        {
            return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
        }

    }
}
char *task_constraints::selectTC(string ID)
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
            else
                HashKey.getline(linea,10000);
        }
        if(encontrado)
        {
            string res;
            long int n=atoi(linea),s;
            ifstream csv("indices/"+this->archivo+".txt");
            csv.seekg(n,ios::beg);
            csv.getline(linea,10000,',');
            while(ID==linea)
            {
                csv.getline(linea,1000,',');
                csv.getline(seg,1000);
                n=atoi(linea);
                s=atoi(seg);
                ifstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                is.seekg(n,ios::beg);
                is.getline(linea,1000);
                cout<<linea<<endl;
                csv.getline(linea,1000,',');
            }
            return "Seleccion hecha correctamente :3";
        }
        else
        {
            return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
        }

    }
}
char *task_events::selectTE(char* ID)
{
    char *linea=new char[10000];
    int divi=0;
    long long int IDn=atoll(ID),aux=-1,aux2;
    char* ids=new char[1000];
    bool encontrado=false;
    for(int i=0;i<5;i++)
    {
        ifstream csv("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-"+numero(i)+".txt",std::fstream::binary);
        if (!csv)
        {
            return "No se encuentra la tabla a buscar";
        }
        else
        {
            while(!csv.eof())
            {

                csv.getline(linea,10000,',');
                ids=linea;
                aux=atoll(ids);
                if(IDn<=aux)
                {
                    csv.getline(linea,1000,',');
                    aux2=atoll(linea);
                }
                else
                {
                    ifstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(i)+".txt",std::fstream::binary);
                    indi.seekg(aux2,ios::beg);
                    while(IDn<aux && !indi.eof())
                    {
                        indi.getline(linea,1000,',');
                        aux2=atoll(linea);
                        if(IDn==aux2)
                        {
                            encontrado=true;
                            break;
                        }
                        else
                        {
                            indi.getline(linea,1000);
                        }
                    }
                    if(encontrado)
                        break;
                    else if(indi.eof())
                    {
                        ifstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(i)+".txt",std::fstream::binary);
                        indi.seekg(aux2,ios::beg);
                        while(IDn<aux && !indi.eof())
                        {
                            indi.getline(linea,1000,',');
                            aux2=atoll(linea);
                            if(IDn==aux2)
                            {
                                encontrado=true;
                                break;
                            }
                            else
                            {
                                indi.getline(linea,1000);
                            }
                        }
                    }
                }
            }//Seguir desde aqui!!!
            if(encontrado)
            {
                ifstream is("google/"+this->archivo+"/part-"+numero(divi)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                if (!is)
                {
                    return "Error al abrir el archivo";
                }
                else
                {
                    int n=atoll(linea);
                    is.seekg(n,ios::beg);
                    ///is.getline(linea,1000);
                    is>>linea;
                    return linea;
                }
            }
            return ("NO SE ENCONTRO INDICE A BUSCAR!!!!GG");
        }
    }
}
