#include "Bloqueos.h"
#include "EArbol.h"

void indices(string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        job_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        A.indicesJE();
        A.desbloquear();
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        A.indicesMA();
        A.desbloquear();
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        A.indicesME();
        A.desbloquear();
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        A.indicesTC();
        A.desbloquear();
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        A.indicesTE();
        A.desbloquear();
    }
    else
        cout<<"No se tiene la tabla a buscar."<<endl;
}

string select(string ID,string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        job_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        respuesta=A.selectJE(ID);
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes B;
        while(B.Estado())
        {
            Sleep(5000);
        }
        respuesta=B.selectMA(ID);
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        machine_events C;
        while(C.Estado())
        {
            Sleep(5000);
        }
        respuesta=C.selectME(ID);
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints D;
        while(D.Estado())
        {
            Sleep(5000);
        }
        respuesta=D.selectTC(ID);
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        task_events E;
        while(E.Estado())
        {
            Sleep(5000);
        }
        ///E.selectTE(ID);
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}
string update(string ID,string carpeta)
{
    string respuesta;
    vector<string> res;
    if(carpeta=="job_events")
    {
        job_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        respuesta=A.update(ID);
        A.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        machine_attributes A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        respuesta=A.update(ID);
        A.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        machine_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        respuesta=A.update(ID);
        A.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        task_constraints A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        respuesta=A.update(ID);
        A.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        task_events A;
        while(A.Estado())
        {
            Sleep(5000);
        }
        A.bloquear();
        respuesta=A.update(ID);
        A.desbloquear();
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}

int main()
{
    int opc;
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
        }
        else if(opc==2)
        {
            string ID,archivo;
            cout<<"Ingrese indice seguido de la tabla que desea seleccionar"<<endl;
            cin>>ID>>archivo;
            cout<<select(ID,archivo)<<endl;
        }
        else if(opc==3)
        {
            string ID,archivo;
            cout<<"Ingrese indice seguido del segundo campo y despues la tabla que desea actualizar"<<endl;
            cin>>ID>>archivo;
            cout<<update(ID,archivo);
        }
        else if(opc==4)
        {
            break;
        }
    }
    return 0;
}

