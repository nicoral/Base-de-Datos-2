
#include <queue>

using namespace std;


class funciones
{
public:
    string ID;
    string carpeta;
    string newline=NULL;
    int funcion;
    funciones(): ID(""),carpeta(""),newline(""),funcion(0){}
    funciones(string ID,string carpeta,int funcion):ID(ID),carpeta(carpeta),newline(""),funcion(funcion){}
    funciones(string ID,string carpeta,string newline,int funcion):ID(ID),carpeta(carpeta),newline(newline),funcion(funcion){}
};
bool operator< (const funciones& structfun1, const funciones &structfun2)
{
    return structfun1.funcion > structfun2.funcion;
}

bool operator> (const funciones& structfun1, const funciones &structfun2)
{
    return structfun1.funcion > structfun2.funcion;
}

class Datos {
public:
    long long int ID;
    int posicion;
    int Parchivo;
    Datos(): ID(0),posicion(0),Parchivo(0){}
    Datos( long long int ID, int posicion,int Parchivo ):ID(ID), posicion(posicion),Parchivo(Parchivo){}
};

bool operator< (const Datos& structdatos1, const Datos &structdatos2)
{
    return structdatos1.ID > structdatos2.ID;
}

bool operator> (const Datos& structdatos1, const Datos &structdatos2)
{
    return structdatos1.ID < structdatos2.ID;
}

