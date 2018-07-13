#include "Select.h"

string job_events::update(string ID,string C2)
{
    char *linea=new char[10000];
    char *seg=new char[10000];
    char* aux=new char[1000];
    vector<string> auxV;
    int divi=0;
    string ids,Newline;
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
        ifstream csv("indices/"+this->archivo+".txt");
        csv.seekg(n,ios::beg);
        csv.getline(linea,10000,',');
        if(ID==linea)
        {

            csv.getline(linea,1000,',');
            csv.getline(seg,1000);
            n=atoll(linea);
            s=atoi(seg);
            ifstream is("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
            if(is!=NULL)
            {
               while(!is.eof())
                {
                    long long int na=is.tellg();
                    if(n==na)
                    {
                        auxV.push_back(Newline);
                        is.getline(linea,10000);

                    }
                    else
                    {
                        is.getline(linea,10000);
                        auxV.push_back(linea);
                    }
                }
                is.close();
                ofstream os("google/"+this->archivo+"/part-"+numero(s)+"-of-"+numero(this->cantidad)+".csv",std::fstream::binary);
                for(int j=0;j<auxV.size();j++)
                {
                    os<<auxV[j]<<endl;
                }
                return "Linea modificada";
            }
            else
            {
                return "no se pudo realizar la operacion";
            }
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
