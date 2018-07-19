#include "Delete.h"

string machine_attributes::insertMA(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamNewHash;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newHash,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+".txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newHash=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/HashKey-"+this->archivo+".txt",ios::in|ios::out|ios::app);
            HashIndices<<newHash<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
string machine_events::insertME(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamNewHash;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newHash,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+".txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newHash=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/HashKey-"+this->archivo+".txt",ios::in|ios::out|ios::app);
            HashIndices<<newHash<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
string job_events::insertJE(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamNewHash;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newHash,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+".txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newHash=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/HashKey-"+this->archivo+".txt",ios::in|ios::out|ios::app);
            HashIndices<<newHash<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
string task_constraints::insertTC(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamNewHash;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newHash,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+".txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newHash=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/HashKey-"+this->archivo+".txt",ios::in|ios::out|ios::app);
            HashIndices<<newHash<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
string task_events::insertTE(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamnewCluster;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newCluster,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+"/"+this->archivo+"-00000.txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newCluster=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-00000.txt",ios::in|ios::out|ios::app);
            HashIndices<<newCluster<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
string task_usage::insertTU(string ID,string newline)
{
    char* linea=new char[1000];
    int tamNewline=newline.length(),tamNewIndice,tamnewCluster;
    char *a=new char[ID.length()+1];
    strcpy(a, ID.c_str());
    long long int Posicion,IDn=atol(a);
    string newIndice,newCluster,Result;
    fstream BD;
    BD.open("google/"+this->archivo+"/part-00000-of-"+numero(this->cantidad)+".csv",ios::in|ios::out|ios::app);
    if(BD!=NULL)
    {
        BD<<newline<<endl;
        Posicion=BD.tellg()-tamNewline-2;
        fstream Indices;
        Indices.open("indices/"+this->archivo+"/"+this->archivo+"-00000.txt",ios::in|ios::out|ios::app);
        if(Indices!=NULL)
        {

            ostringstream convert;
            convert << Posicion;
            Result = convert.str();
            newIndice=ID+','+Result+','+'0';
            tamNewIndice=newIndice.length();
            Indices<<newIndice<<endl;
            Posicion=Indices.tellg()-tamNewIndice-2;
            ostringstream convert2;
            convert2 << Posicion;
            Result = convert2.str();
            newCluster=ID+','+Result;
            fstream HashIndices;
            HashIndices.open("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-00000.txt",ios::in|ios::out|ios::app);
            HashIndices<<newCluster<<endl;
            return "Insercion hecha Correctamente";
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        return "Error";
    }
}
