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
string job_events::Delete(string ID)
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
string task_constraints::Delete(string ID)
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
string task_events::Delete(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int IDn=atoll(a),campo1,campo2=0,campo3;
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
                csv.getline(linea,1000,',');
                campo1=atoll(linea);
                if(IDn>campo1)
                {
                    csv.getline(linea,1000);
                    campo2=atoll(linea);
                }
                else
                {
                    encontrado=true;
                    csv.close();
                    break;
                }
            }
            if(encontrado)
            {
                ifstream is("indices/"+this->archivo+"/"+this->archivo+"-"+numero(i)+".txt",std::fstream::binary);
                is.seekg(campo2,ios::beg);
                while(!is.eof())
                {
                    is.getline(linea,1000,',');
                    if(ID==linea)
                    {
                        is.getline(linea,1000,',');
                        campo2=atoll(linea);
                        is.getline(linea,1000);
                        campo3=atoll(linea);
                        fstream iss("google/"+this->archivo+"/part-"+numero(campo3)+"-of-"+numero(this->cantidad)+".csv",ios::in|ios::out);
                        iss.seekg(campo2,ios::beg);
                        iss.getline(linea,1000);
                        int t=strlen(linea);
                        iss.seekg(campo2,ios::beg);
                        for(int i=0;i<t;i++)
                        {
                            iss<<' ';
                        }
                        return "Linea eliminada";
                    }
                    else
                    {
                        is.getline(linea,1000);
                    }
                }
                return "No se encontro los indices";
            }
        }
    }
}
string task_usage::Delete(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int IDn=atoll(a),campo1,campo2=0,campo3;
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
                csv.getline(linea,1000,',');
                campo1=atoll(linea);
                if(IDn>campo1)
                {
                    csv.getline(linea,1000);
                    campo2=atoll(linea);
                }
                else
                {
                    encontrado=true;
                    csv.close();
                    break;
                }
            }
            if(encontrado)
            {
                ifstream is("indices/"+this->archivo+"/"+this->archivo+"-"+numero(i)+".txt",std::fstream::binary);
                is.seekg(campo2,ios::beg);
                while(!is.eof())
                {
                    is.getline(linea,1000,',');
                    if(ID==linea)
                    {
                        is.getline(linea,1000,',');
                        campo2=atoll(linea);
                        is.getline(linea,1000);
                        campo3=atoll(linea);
                        fstream iss("google/"+this->archivo+"/part-"+numero(campo3)+"-of-"+numero(this->cantidad)+".csv",ios::in|ios::out);
                        iss.seekg(campo2,ios::beg);
                        iss.getline(linea,1000);
                        int t=strlen(linea);
                        iss.seekg(campo2,ios::beg);
                        for(int i=0;i<t;i++)
                        {
                            iss<<' ';
                        }
                        return "Linea eliminada";
                    }
                    else
                    {
                        is.getline(linea,1000);
                    }
                }
                return "No se encontro los indices";
            }
        }
    }
}
