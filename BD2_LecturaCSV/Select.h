#include "indices.h"


char *job_events::selectJE(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    string ids;
    bool encontrado=false;
    ifstream csv("indices/"+this->archivo+".txt",std::fstream::binary);
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
            if(ID==ids)
            {
                csv.getline(linea,10000);
                encontrado=true;
                break;
            }
            else if(ids=="DIVISION")
                divi++;
            else
                csv.getline(linea,10000);
        }
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
char *machine_attributes::selectMA(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    string ids;
    bool encontrado=false;
    ifstream csv("indices/"+this->archivo+".txt",std::fstream::binary);
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
            if(ID==ids)
            {
                csv.getline(linea,10000);
                encontrado=true;
                break;
            }
            else if(ids=="DIVISION")
                divi++;
            else
                csv.getline(linea,10000);
        }
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
string machine_events::selectME(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    int divi=0;
    string ids;
    bool encontrado=false;
    ifstream HashKey("indices/HashKey-"+this->archivo+".txt");
    vector<string> Respuestas;
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
                Respuestas.push_back(linea);
                csv.getline(linea,1000,',');
            }
            for(int i=0;i<Respuestas.size();i++)
                cout<<Respuestas[i]<<endl;
            return "";
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
    int divi=0;
    string ids;
    bool encontrado=false;
    ifstream csv("indices/"+this->archivo+".txt",std::fstream::binary);
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
            if(ID==ids)
            {
                csv.getline(linea,10000);
                encontrado=true;
                break;
            }
            else if(ids=="DIVISION")
                divi++;
            else
                csv.getline(linea,10000);
        }
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
char *task_events::selectTE(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    string ids;
    bool encontrado=false;
    ifstream csv("indices/"+this->archivo+".txt",std::fstream::binary);
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
            if(ID==ids)
            {
                csv.getline(linea,10000);
                encontrado=true;
                break;
            }
            else if(ids=="DIVISION")
                divi++;
            else
                csv.getline(linea,10000);
        }
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
