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

}
string machine_events::update(string ID)
{

}
string task_constraints::update(string ID)
{

}
string task_events::update(string ID)
{

}
