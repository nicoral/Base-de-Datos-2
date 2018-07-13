#include "includes.h"
#include "update.h"
#include "EArbol.h"




/**void indices(string carpeta,int cantidadC,int PosiIndice)*/
void indices(string carpeta)
{
    if(carpeta=="job_events")
    {
        job_events A;
        A.indicesJE();
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        A.indicesMA();
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        A.indicesME();
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        A.indicesTC();
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        A.indicesTE();
    }
    else
        cout<<"No se tiene la tabla a buscar."<<endl;
}

string select(string ID,string carpeta)
{
    string respuesta;
    vector<string> res;
    if(carpeta=="job_events")
    {
        job_events A;
        respuesta=A.selectJE(ID);
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        respuesta=A.selectMA(ID);
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        respuesta=A.selectME(ID);
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        respuesta=A.selectTC(ID);
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        ///A.selectTE(ID);
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}
string update(string ID,string c2,string carpeta)
{
    string respuesta;
    vector<string> res;
    if(carpeta=="job_events")
    {
        job_events A;
        A.update(ID,c2);
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        A.update(ID,c2);
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        A.update(ID,c2);
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        A.update(ID,c2);
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        A.update(ID,c2);
    }
    else
        return "No se tiene la tabla a buscar.";
}

int main()
{
    /**int opc;
    cout<<"---BIENVENIDOS A NUESTRO MOTOR DE BASE DE DATOS---"<<endl;
    while(true)
    {
        cout<<"1.- Indexar una tabla:"<<endl;
        cout<<"2.- Seleccionar por indice de una tabla:"<<endl;
        cout<<"3.- Actualizar datos de una tabla:"<<endl;
        cout<<"4.- Exit:"<<endl;
        cin>>opc;
        if(opc==1)
        {
            string archivo;
            cout<<"Ingrese tabla a indexar"<<endl;
            cin>>archivo;
            indices(archivo);
            cout<<"Indexacion Realizada Correctamente :3"<<endl;
        }
        else if(opc==2)
        {
            string ID,archivo;
            cout<<"Ingrese indice seguido de la tabla que desea seleccionar"<<endl;
            cin>>ID>>archivo;
            cout<<select(ID,archivo);
            cout<<"Seleccion hecha correctamente :3"<<endl;
        }
        else if(opc==3)
        {
            string ID,C2,archivo;
            cout<<"Ingrese indice seguido del segundo campo y despues la tabla que desea actualizar"<<endl;
            cin>>ID>>C2>>archivo;
            cout<<update(ID,C2,archivo);
            cout<<"Actualizacion hecha correctamente :3"<<endl;
        }
        else if(opc==4)
        {
            break;
        }
    }*/

    return 0;
}

