
///#include "stdafx.h"
#include <queue>

///#using <mscorlib.dll>

using namespace std;  // std c++ libs implemented in std



//Define a custom data type.
class Datos {
public:
    long long int ID;
    int posicion;
    int Parchivo;
    Datos(): ID(0),posicion(0),Parchivo(0){}
    Datos( long long int ID, int posicion,int Parchivo ):ID(ID), posicion(posicion),Parchivo(Parchivo){}
};

//Overload the < operator.
bool operator< (const Datos& structdatos1, const Datos &structdatos2)
{
    return structdatos1.ID > structdatos2.ID;
}
//Overload the > operator.
bool operator> (const Datos& structdatos1, const Datos &structdatos2)
{
    return structdatos1.ID < structdatos2.ID;
}

