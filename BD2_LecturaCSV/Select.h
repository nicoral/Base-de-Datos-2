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
                if(linea[0]==' ')
                    cout<<"Esta linea de registro fue eliminada"<<endl;
                else
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
                if(linea[0]==' ')
                    cout<<"Esta linea de registro fue eliminada"<<endl;
                else
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
                if(linea[0]==' ')
                    cout<<"Esta linea de registro fue eliminada"<<endl;
                else
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
                if(linea[0]==' ')
                    cout<<"Esta linea de registro fue eliminada"<<endl;
                else
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
char *task_events::selectTE(string ID)
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

                        while(ID==linea)
                        {
                            is.getline(linea,1000,',');
                            campo2=atoll(linea);
                            is.getline(linea,1000);
                            campo3=atoll(linea);
                            ifstream iss("google/"+this->archivo+"/part-"+numero(campo3)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                            iss.seekg(campo2,ios::beg);
                            iss.getline(linea,1000);
                            if(linea[0]==' ')
                                cout<<"Esta linea de registro fue eliminada"<<endl;
                            else
                                cout<<linea<<endl;
                            iss.close();
                            is.getline(linea,1000,',');
                        }
                        return "Seleccion hecha exitosamente";
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
char* task_usage::selectTU(string ID)
{
    char *linea=new char[10000];
    int divi=0;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int IDn=atoll(a),campo1,campo2=0,campo3;
    char* ids=new char[1000];
    bool encontrado=false;
    for(int i=0;i<37;i++)
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

                        while(ID==linea)
                        {
                            is.getline(linea,1000,',');
                            campo2=atoll(linea);
                            is.getline(linea,1000);
                            campo3=atoll(linea);
                            ifstream iss("google/"+this->archivo+"/part-"+numero(campo3)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                            iss.seekg(campo2,ios::beg);
                            iss.getline(linea,1000);
                            if(linea[0]==' ')
                                cout<<"Esta linea de registro fue eliminada"<<endl;
                            else
                                cout<<linea<<endl;
                            iss.close();
                            is.getline(linea,1000,',');
                        }
                        return "Seleccion hecha exitosamente";
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
