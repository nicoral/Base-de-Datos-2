#include "insert.h"
#include "EArbol.h"
machine_attributes MA;
machine_events ME;
job_events JE;
task_constraints TC;
task_events TE;
task_usage TU;
void indices(string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        JE.bloquear();
        JE.indicesJE();
        JE.desbloquear();
    }
    else if(carpeta=="task_usage")
    {
        while(TU.Estado())
        {
            Sleep(5000);
        }
        TU.bloquear();
        TU.indicesTU();
        TU.desbloquear();
    }
    else if(carpeta=="machine_attributes")
    {
        while(MA.Estado())
        {
            Sleep(5000);
        }
        MA.bloquear();
        MA.indicesMA();
        MA.desbloquear();
    }
    else if(carpeta=="machine_events")
    {
        while(ME.Estado())
        {
            Sleep(5000);
        }
        ME.bloquear();
        ME.indicesME();
        ME.desbloquear();
    }
    else if(carpeta=="task_constraints")
    {
        while(TC.Estado())
        {
            Sleep(5000);
        }
        TC.bloquear();
        TC.indicesTC();
        TC.desbloquear();
    }
    else if(carpeta=="task_events")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        TE.bloquear();
        TE.indicesTE();
        TE.desbloquear();
    }
    else
        cout<<"No se tiene la tabla a buscar."<<endl;
}

string select(string ID,string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        respuesta=JE.selectJE(ID);
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        while(MA.Estado())
        {
            Sleep(5000);
        }
        respuesta=MA.selectMA(ID);
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        while(ME.Estado())
        {
            Sleep(5000);
        }
        respuesta=ME.selectME(ID);
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        while(TC.Estado())
        {
            Sleep(5000);
        }
        respuesta=TC.selectTC(ID);
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        respuesta=TE.selectTE(ID);
        return respuesta;
    }
    else if(carpeta=="task_usage")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        respuesta=TU.selectTU(ID);
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}
string update(string ID,string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        JE.bloquear();
        respuesta=JE.update(ID);
        JE.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        while(MA.Estado())
        {
            Sleep(5000);
        }
        MA.bloquear();
        respuesta=MA.update(ID);
        MA.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        while(ME.Estado())
        {
            Sleep(5000);
        }
        ME.bloquear();
        respuesta=ME.update(ID);
        ME.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        while(TC.Estado())
        {
            Sleep(5000);
        }
        TC.bloquear();
        respuesta=TC.update(ID);
        TC.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        TE.bloquear();
        respuesta=TE.update(ID);
        TE.desbloquear();
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}

string Delete(string ID,string carpeta)
{
    string respuesta;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        JE.bloquear();
        respuesta=JE.Delete(ID);
        JE.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_attributes")
    {
        while(MA.Estado())
        {
            Sleep(5000);
        }
        MA.bloquear();
        respuesta=MA.Delete(ID);
        MA.desbloquear();
        return respuesta;
    }
    else if(carpeta=="machine_events")
    {
        while(ME.Estado())
        {
            Sleep(5000);
        }
        ME.bloquear();
        respuesta=ME.Delete(ID);
        ME.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_constraints")
    {
        while(TC.Estado())
        {
            Sleep(5000);
        }
        TC.bloquear();
        respuesta=TC.Delete(ID);
        TC.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_events")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        TE.bloquear();
        respuesta=TE.Delete(ID);
        TE.desbloquear();
        return respuesta;
    }
    else
        return "No se tiene la tabla a buscar.";
}

int main()
{
    string opc;
    cout<<"---BIENVENIDOS A NUESTRO MOTOR DE BASE DE DATOS---"<<endl;
    while(true)
    {
        cout<<"1.- Indexar una tabla:"<<endl;
        cout<<"2.- Seleccionar por indice de una tabla:"<<endl;
        cout<<"3.- Actualizar registro de la BD:"<<endl;
        cout<<"4.- Eliminar registro de la BD:"<<endl;
        cout<<"5.- Exit:"<<endl;
        cin>>opc;
        if(opc=="1")
        {
            string archivo;
            cout<<"Ingrese tabla a indexar"<<endl;
            cin>>archivo;
            indices(archivo);
        }
        else if(opc=="2")
        {
            string ID;
            string archivo;
            cout<<"Ingrese indice seguido de la tabla que desea seleccionar"<<endl;
            cin>>ID>>archivo;
            cout<<select(ID,archivo)<<endl;
        }
        else if(opc=="3")
        {
            string ID,archivo;
            cout<<"Ingrese indice y despues la tabla que desea actualizar"<<endl;
            cin>>ID>>archivo;
            cout<<update(ID,archivo)<<endl;
        }
        else if(opc=="4")
        {
            string ID,archivo;
            cout<<"Ingrese indice y despues la tabla que desea eliminar"<<endl;
            cin>>ID>>archivo;
            cout<<Delete(ID,archivo)<<endl;
        }
        else if(opc=="5")
        {
            break;
        }
        else
        {
            cout<<"Opcion incorrecta :("<<endl;
        }
    }
    return 0;
}

