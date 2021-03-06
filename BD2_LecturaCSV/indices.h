#include "NewLine.h"
void task_usage::indicesTU()
{
    char *linea=new char[1000];
    long int posi=0,posicion,posiHash,temp=-1,cont=0;
    int c=0;
    vector<Datos> ID;
    ID.shrink_to_fit();
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
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
                    if(ID.size()>33461309)
                    {
                        cont=0;
                        sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
                        ofstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(c)+".txt");
                        ofstream ClusterKeys ("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-"+numero(c)+".txt");
                        for(int i=0;i<ID.size();i++)
                        {

                            if(temp!=ID[i].ID &&temp<ID[i].ID)
                            {
                                if(cont==5000)
                                {
                                    posicion=indi.tellp();
                                    ClusterKeys<<ID[i].ID<<','<<posicion<<endl;
                                    cont=1;
                                }
                                cont++;
                                temp=ID[i].ID;
                            }
                            indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
                        }
                        indi.close();
                        ClusterKeys.close();
                        ID.clear();
                        c++;
                    }

                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(c)+".txt");
    ofstream ClusterKeys ("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-"+numero(c)+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            posicion=indi.tellp();
            cont++;
            if(cont==5000)
            {
                ClusterKeys<<ID[i].ID<<','<<posicion<<endl;
                cont=1;
            }
            temp=ID[i].ID;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
    ClusterKeys<<ID[ID.size()-1].ID<<','<<posicion;
    indi.close();
    ClusterKeys.close();
    ID.clear();
}
void task_events::indicesTE()
{
    char *linea=new char[1000];
    long int posi=0,posicion,posiHash,temp=-1,cont=0;
    int c=0;
    vector<Datos> ID;
    ID.shrink_to_fit();
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
        }
        else
        {
            posicion=archivo.tellg();
            while(!archivo.eof() )
            {
                if(posi!=3)
                {
                    archivo.getline(linea,1000,',');
                    posi++;
                }
                else
                {
                    long long int dato=atoll(linea);
                    Datos neew(dato,posicion,i);
                    if(dato!=0&& posicion!=0)
                        ID.push_back(neew);
                    if(ID.size()>33461309)
                    {
                        cont=0;
                        sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
                        ofstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(c)+".txt");
                        ofstream ClusterKeys ("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-"+numero(c)+".txt");
                        for(int i=0;i<ID.size();i++)
                        {

                            if(temp!=ID[i].ID &&temp<ID[i].ID)
                            {
                                if(cont==5000)
                                {
                                    posicion=indi.tellp();
                                    ClusterKeys<<ID[i].ID<<','<<posicion<<endl;
                                    cont=1;
                                }
                                cont++;
                                temp=ID[i].ID;
                            }
                            indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
                        }

                        indi.close();
                        ClusterKeys.close();
                        ID.clear();
                        c++;
                    }

                    archivo.getline(linea,1000);
                    posicion=archivo.tellg();
                    posi=0;
                }
            }
        }
    }
    sort(ID.begin(),ID.end(),[](const Datos& datos1,const Datos& datos2){return (datos1.ID<datos2.ID);});
    ofstream indi("indices/"+this->archivo+"/"+this->archivo+"-"+numero(c)+".txt");
    ofstream ClusterKeys ("indices/"+this->archivo+"/ClusterKey-"+this->archivo+"-"+numero(c)+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            posicion=indi.tellp();
            cont++;
            if(cont==5000)
            {
                ClusterKeys<<ID[i].ID<<','<<posicion<<endl;
                cont=1;
            }
            temp=ID[i].ID;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
    ClusterKeys<<ID[ID.size()-1].ID<<','<<posicion;
    indi.close();
    ClusterKeys.close();
    ID.clear();
}
void task_constraints::indicesTC()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    long long int dato,temp=-1;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
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
                    dato=atoll(linea);
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
    ofstream HashKeys ("indices/HashKey-"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            temp=ID[i].ID;
            posicion=indi.tellp();
            HashKeys<<temp<<','<<posicion<<endl;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
	indi.close();
    HashKeys.close();
    cout<<"Indexacion Realizada Correctamente :3"<<endl;
}
void machine_events::indicesME()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    long long int dato,temp=-1;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
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
                    dato=atoll(linea);
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
    ofstream HashKeys ("indices/HashKey-"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            temp=ID[i].ID;
            posicion=indi.tellp();
            HashKeys<<temp<<','<<posicion<<endl;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
	indi.close();
    HashKeys.close();
    cout<<"Indexacion Realizada Correctamente :3"<<endl;
}
void machine_attributes::indicesMA()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    long long int dato,temp=-1;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
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
                    dato=atoll(linea);
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
    ofstream HashKeys ("indices/HashKey-"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            temp=ID[i].ID;
            posicion=indi.tellp();
            HashKeys<<temp<<','<<posicion<<endl;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
	indi.close();
    HashKeys.close();
    cout<<"Indexacion Realizada Correctamente :3"<<endl;
}
void job_events::indicesJE()
{
    char *linea=new char[1000];
    long int posi=0,posicion;
    long long int dato,temp=-1;
    vector<Datos> ID;
    for(int i=0;i<this->cantidad;i++)
    {
        string num=numero(i);
        string url=("google/"+this->archivo+"/part-"+num+"-of-"+numero(this->cantidad)+".csv");
        ifstream archivo (url,std::fstream::binary);
        if (archivo == NULL)
        {
             cout<<"Error al abrir el archivo"<<endl;
             return;
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
                    dato=atoll(linea);
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
    ofstream HashKeys ("indices/HashKey-"+this->archivo+".txt");
    for(int i=0;i<ID.size();i++)
    {
        if(temp!=ID[i].ID &&temp<ID[i].ID)
        {
            temp=ID[i].ID;
            posicion=indi.tellp();
            HashKeys<<temp<<','<<posicion<<endl;
        }
        indi<< ID[i].ID <<','<< ID[i].posicion <<','<< ID[i].Parchivo <<endl;
    }
	indi.close();
    HashKeys.close();
    cout<<"Indexacion Realizada Correctamente :3"<<endl;
}



