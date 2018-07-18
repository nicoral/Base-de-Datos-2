#include "Select.h"

string job_events::update(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    vector<string> auxV;
    long long int divi=0,variacion,posicionI;
    string ids,Newline,url;
    bool encontrado=false;

    cout<<"Introducir el nuevo valor para el campo TimeSpamp"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error de Formato";
    cout<<"Introducir el nuevo valor para el campo Missing_Info"<<endl;cin>>this->missing_info;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo User_Name"<<endl;cin>>this->user_name;
    cout<<"Introducir el nuevo valor para el campo Scheduling_Class"<<endl;cin>>this->scheduling_class;
    cout<<"Introducir el nuevo valor para el campo Logical_Job_Name"<<endl;cin>>this->logical_job_name;
    string str(aux);
    Newline=str+','+','+ID+','+this->missing_info+','+this->event_type+','+this->user_name+','+this->scheduling_class+','+this->logical_job_name;
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
        posicionI=n;
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
                char* p1 = new char[Newline.length() + 1];
                strcpy(p1,Newline.c_str());
                int t=strlen(linea),tn=strlen(p1),tam=t-tn;
                is.seekg(n,ios::beg);
                for(int i=0;i<tn;i++)
                {
                    is<<p1[i];
                }
                for(int i=0;i<tam;i++)
                {
                    is<<' ';
                }
                return "Linea modificada";
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
string machine_attributes::update(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    vector<string> auxV;
    long long int divi=0,variacion,posicionI;
    string ids,Newline,url;
    bool encontrado=false;

    cout<<"Introducir el nuevo valor para el campo TimeSpamp"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error de Formato";
    cout<<"Introducir el nuevo valor para el campo Attribute_Name"<<endl;cin>>this->attribute_name;
    cout<<"Introducir el nuevo valor para el campo Attribute_Deleted"<<endl;cin>>this->attribute_value;
    cout<<"Introducir el nuevo valor para el campo Attribute_Value"<<endl;cin>>aux;
    if(!esNumero(aux)) return "Error de Fromato";
    string str2(aux);
    string str(aux);
    Newline=str+','+','+ID+','+this->attribute_name+','+this->attribute_value+','+str2;
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
        posicionI=n;
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
                char* p1 = new char[Newline.length() + 1];
                strcpy(p1,Newline.c_str());
                int t=strlen(linea),tn=strlen(p1),tam=t-tn;
                is.seekg(n,ios::beg);
                for(int i=0;i<tn;i++)
                {
                    is<<p1[i];
                }
                for(int i=0;i<tam;i++)
                {
                    is<<' ';
                }
                return "Linea modificada";
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
string machine_events::update(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    vector<string> auxV;
    long long int divi=0,variacion,posicionI;
    string ids,Newline,url;
    bool encontrado=false;

    cout<<"Introducir el nuevo valor para el campo TimeSpamp"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error de Formato";
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo Platform_ID"<<endl;cin>>this->platform_ID;
    cout<<"Introducir el nuevo valor para el campo Capacity_CPU"<<endl;cin>>this->capacity_CPU;
    cout<<"Introducir el nuevo valor para el campo Capacity_Memory"<<endl;cin>>this->capacity_memory;
    string str(aux);
    Newline=str+','+','+ID+','+this->event_type+','+this->platform_ID+','+capacity_CPU+','+capacity_memory;
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
        posicionI=n;
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
                char* p1 = new char[Newline.length() + 1];
                strcpy(p1,Newline.c_str());
                int t=strlen(linea),tn=strlen(p1),tam=t-tn;
                is.seekg(n,ios::beg);
                for(int i=0;i<tn;i++)
                {
                    is<<p1[i];
                }
                for(int i=0;i<tam;i++)
                {
                    is<<' ';
                }
                return "Linea modificada";
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
string task_constraints::update(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    long long int posicionI;
    string ids,Newline,url;
    bool encontrado=false;

    cout<<"Introducir el nuevo valor para el campo TimeSpamp"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error de Formato";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo Attribute_Name"<<endl;cin>>aux;
    if(!esNumero(aux)) return "Error de Formato";
    string str2(aux);
    cout<<"Introducir el nuevo valor para el campo Attribute_Name"<<endl;cin>>this->attribute_name;
    cout<<"Introducir el nuevo valor para el campo Comparison_Operator"<<endl;cin>>this->comparison_operator;
    cout<<"Introducir el nuevo valor para el campo Attribute_Value"<<endl;cin>>this->attribute_value;

    Newline=str+','+','+ID+','+str2+','+this->attribute_name+','+this->comparison_operator+','+attribute_value;
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
        long long int n=atoll(linea),s;
        url="indices/"+this->archivo+".txt";
        ifstream csv(url);
        csv.seekg(n,ios::beg);
        posicionI=n;
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
                char* p1 = new char[Newline.length() + 1];
                strcpy(p1,Newline.c_str());
                int t=strlen(linea),tn=strlen(p1),tam=t-tn;
                is.seekg(n,ios::beg);
                for(int i=0;i<tn;i++)
                {
                    is<<p1[i];
                }
                for(int i=0;i<tam;i++)
                {
                    is<<' ';
                }
                return "Linea modificada";
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
string task_events::update(string ID)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    vector<string> auxV;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int divi=0,variacion,posicionI,IDn=atoll(a),campo1,campo2=0,campo3;
    string ids,Newline,url;
    bool encontrado=false;

    cout<<"Introducir el nuevo valor para el campo TimeSpamp"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error de Formato";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo Missing_Info"<<endl;cin>>this->missing_info;
    cout<<"Introducir el nuevo valor para el campo Machine_ID"<<endl;cin>>this->machine_ID;
    if(!esNumero(aux)) return "Error de Fromato";
    string str2(aux);
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->user_name;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->scheduling_class;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->priority;
    if(!esNumero(aux)) return "Error para el formato";
    string str3(aux);
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->resource_request_for_CPU_cores;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->resource_request_for_RAM;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->resource_request_for_local_disk_space;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->different_machine_constraint;
    Newline=str+','+this->missing_info+','+ID+','+str2+','+this->event_type+','+this->user_name+','+this->scheduling_class+','+str3+this->resource_request_for_CPU_cores+','+this->resource_request_for_RAM+','+this->resource_request_for_local_disk_space+','+this->different_machine_constraint;
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
                    campo1=atoll(linea);
                    if(IDn==campo1)
                    {
                        is.getline(linea,1000,',');
                        campo2=atoll(linea);
                        is.getline(linea,1000);
                        campo3=atoll(linea);
                        fstream iss("google/"+this->archivo+"/part-"+numero(campo3)+"-of-"+numero(this->cantidad)+".csv",ios::in|ios::out);
                        iss.seekg(campo2,ios::beg);
                        iss.getline(linea,1000);
                        char* p1 = new char[Newline.length() + 1];
                        strcpy(p1,Newline.c_str());
                        int t=strlen(linea),tn=strlen(p1),tam=t-tn;
                        iss.seekg(campo2,ios::beg);
                        for(int i=0;i<tn;i++)
                        {
                            iss<<p1[i];
                        }
                        for(int i=0;i<tam;i++)
                        {
                            iss<<' ';
                        }
                        return "Linea modificada";
                    }
                    else if(IDn<campo1)
                    {
                        break;
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
