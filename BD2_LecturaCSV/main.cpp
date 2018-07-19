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
    string newline;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        JE.bloquear();
        newline=JE.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=JE.update(ID,newline);
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
        newline=MA.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=MA.update(ID,newline);
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
        newline=ME.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=ME.update(ID,newline);
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
        newline=TC.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=TC.update(ID,newline);
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
        newline=TE.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=TE.update(ID,newline);
        TE.desbloquear();
        return respuesta;
    }
    else if(carpeta=="task_usage")
    {
        while(TU.Estado())
        {
            Sleep(5000);
        }
        TU.bloquear();
        newline=TU.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        respuesta=TU.update(ID,newline);
        TU.desbloquear();
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
string Insertar(string ID,string carpeta)
{
    string newline;
    string resultado;
    if(carpeta=="job_events")
    {
        while(JE.Estado())
        {
            Sleep(5000);
        }
        JE.bloquear();
        newline=JE.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=JE.insertJE(ID,newline);
        JE.desbloquear();
        return resultado;
    }
    else if(carpeta=="task_usage")
    {
        while(TU.Estado())
        {
            Sleep(5000);
        }
        TU.bloquear();
        newline=TU.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=TU.insertTU(ID,newline);
        TU.desbloquear();
        return resultado;
    }
    else if(carpeta=="machine_attributes")
    {
        while(MA.Estado())
        {
            Sleep(5000);
        }
        MA.bloquear();
        newline=MA.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=MA.insertMA(ID,newline);
        MA.desbloquear();
        return resultado;
    }
    else if(carpeta=="machine_events")
    {
        while(ME.Estado())
        {
            Sleep(5000);
        }
        ME.bloquear();
        newline=ME.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=ME.insertME(ID,newline);
        ME.desbloquear();
        return resultado;
    }
    else if(carpeta=="task_constraints")
    {
        while(TC.Estado())
        {
            Sleep(5000);
        }
        TC.bloquear();
        newline=TC.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=TC.insertTC(ID,newline);
        TC.desbloquear();
        return resultado;
    }
    else if(carpeta=="task_events")
    {
        while(TE.Estado())
        {
            Sleep(5000);
        }
        TE.bloquear();
        newline=TE.NewLine(ID);
        if(newline=="Error")return "Error de formato";
        resultado=TE.insertTE(ID,newline);
        TE.desbloquear();
        return resultado;
    }
    else
        cout<<"No se tiene la tabla a buscar."<<endl;
}
void Concurrecia()
{
    string opc,IDX,carpetaX,Newline;

    vector<funciones> Funciones;
    while(true)
    {
        cout<<endl;
        cout<<"Que operacion desea realizar"<<endl;
        cout<<"1.- Seleccionar por indice de una tabla:"<<endl;
        cout<<"2.- Insertar registro en la BD:"<<endl;
        cout<<"3.- Actualizar registro de la BD:"<<endl;
        cout<<"4.- Eliminar registro de la BD:"<<endl;
        cout<<"5.- Terminar y Ejecutar"<<endl;
        cin>>opc;
        if(opc=="1")
        {
            funciones AUX;
            cout<<"Ingrese indice seguido de la tabla que desea seleccionar"<<endl;
            cin>>IDX>>carpetaX;
            AUX.carpeta=carpetaX;
            AUX.funcion=1;
            AUX.ID=IDX;
            Funciones.push_back(AUX);
        }
        else if(opc=="2")
        {
            funciones AUX;
            cout<<"Ingrese indice seguido de la tabla que desea insertar"<<endl;
            cin>>IDX>>carpetaX;
            if(carpetaX=="job_events")
            {
                Newline=JE.NewLine(IDX);
            }
            else if(carpetaX=="task_usage")
            {
                Newline=TU.NewLine(IDX);
            }
            else if(carpetaX=="machine_attributes")
            {
                Newline=MA.NewLine(IDX);
            }
            else if(carpetaX=="machine_events")
            {
                Newline=ME.NewLine(IDX);
            }
            else if(carpetaX=="task_constraints")
            {
                Newline=TC.NewLine(IDX);
            }
            else if(carpetaX=="task_events")
            {
                Newline=TE.NewLine(IDX);
            }
            else return;
            if(Newline!="Error")
            {
                AUX.carpeta=carpetaX;
                AUX.funcion=2;
                AUX.ID=IDX;
                AUX.newline=Newline;
                Funciones.push_back(AUX);
            }
            else return;
        }
        else if(opc=="3")
        {
            funciones AUX;
            cout<<"Ingrese indice seguido de la tabla que desea actualizar"<<endl;
            cin>>IDX>>carpetaX;
            if(carpetaX=="job_events")
            {
                Newline=JE.NewLine(IDX);
            }
            else if(carpetaX=="task_usage")
            {
                Newline=TU.NewLine(IDX);
            }
            else if(carpetaX=="machine_attributes")
            {
                Newline=MA.NewLine(IDX);
            }
            else if(carpetaX=="machine_events")
            {
                Newline=ME.NewLine(IDX);
            }
            else if(carpetaX=="task_constraints")
            {
                Newline=TC.NewLine(IDX);
            }
            else if(carpetaX=="task_events")
            {
                Newline=TE.NewLine(IDX);
            }
            else return;
            if(Newline!="Error")
            {
                AUX.carpeta=carpetaX;
                AUX.funcion=3;
                AUX.ID=IDX;
                AUX.newline=Newline;
                Funciones.push_back(AUX);
            }
            else return;
        }
        else if(opc=="4")
        {
            funciones AUX;
            cout<<"Ingrese indice seguido de la tabla que desea eliminar"<<endl;
            cin>>IDX>>carpetaX;
            AUX.carpeta=carpetaX;
            AUX.funcion=4;
            AUX.ID=IDX;
            Funciones.push_back(AUX);
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
    sort(Funciones.begin(),Funciones.end(),[](const funciones& fun1,const funciones& fun2){return (fun1.funcion<fun2.funcion);});
    for(int i=0;i<Funciones.size();i++)
    {
        if(Funciones[i].newline=="")
        {
            if(Funciones[i].funcion==1)
            {
                if(Funciones[i].carpeta=="job_events")
                {
                    cout<<JE.selectJE(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_usage")
                {
                    cout<<TU.selectTU(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_attributes")
                {
                    cout<<MA.selectMA(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_events")
                {
                    cout<<ME.selectME(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_constraints")
                {
                    cout<<TC.selectTC(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_events")
                {
                    cout<<TE.selectTE(Funciones[i].ID)<<endl<<endl;
                }
                else return;
            }
            else if(Funciones[i].funcion==4)
            {
                if(Funciones[i].carpeta=="job_events")
                {
                    cout<<JE.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_usage")
                {
                    cout<<TU.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_attributes")
                {
                    cout<<MA.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_events")
                {
                    cout<<ME.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_constraints")
                {
                    cout<<TC.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_events")
                {
                    cout<<TE.Delete(Funciones[i].ID)<<endl<<endl;
                }
                else return;
            }
        }
        else
        {
            if(Funciones[i].funcion==2)
            {
                if(Funciones[i].carpeta=="job_events")
                {
                    cout<<JE.insertJE(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_usage")
                {
                    cout<<TU.insertTU(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_attributes")
                {
                    cout<<MA.insertMA(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_events")
                {
                    cout<<ME.insertME(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_constraints")
                {
                    cout<<TC.insertTC(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_events")
                {
                    cout<<TE.insertTE(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else return;
            }
            else if(Funciones[i].funcion==3)
            {
                if(Funciones[i].carpeta=="job_events")
                {
                    cout<<JE.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_usage")
                {
                    cout<<TU.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_attributes")
                {
                    cout<<MA.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="machine_events")
                {
                    cout<<ME.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_constraints")
                {
                    cout<<TC.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else if(Funciones[i].carpeta=="task_events")
                {
                    cout<<TE.update(Funciones[i].ID,Funciones[i].newline)<<endl<<endl;
                }
                else return;
            }
        }
    }
}
int main()
{
    string opc;
    cout<<"---BIENVENIDOS A NUESTRO MOTOR DE BASE DE DATOS---"<<endl;
    while(true)
    {
        cout<<"1.- Indexar una tabla:"<<endl;
        cout<<"2.- Seleccionar por indice de una tabla:"<<endl;
        cout<<"3.- Insertar registro en la BD:"<<endl;
        cout<<"4.- Actualizar registro de la BD:"<<endl;
        cout<<"5.- Eliminar registro de la BD:"<<endl;
        cout<<"6.- Crear una concurrecia:"<<endl;
        cout<<"7.- Exit:"<<endl;
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
            string ID;
            string archivo;
            cout<<"Ingrese indice seguido de la tabla que desea insertar"<<endl;
            cin>>ID>>archivo;
            Insertar(ID,archivo);
        }
        else if(opc=="4")
        {
            string ID,archivo;
            cout<<"Ingrese indice y despues la tabla que desea actualizar"<<endl;
            cin>>ID>>archivo;
            cout<<update(ID,archivo)<<endl;
        }
        else if(opc=="5")
        {
            string ID,archivo;
            cout<<"Ingrese indice y despues la tabla que desea eliminar"<<endl;
            cin>>ID>>archivo;
            cout<<Delete(ID,archivo)<<endl;
        }
        else if(opc=="6")
        {
            Concurrecia();
            cout<<"Concurrecia Finalizada"<<endl;
        }
        else if(opc=="7")
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

