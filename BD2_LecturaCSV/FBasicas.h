#include "includes.h"

string numero(int n)
{
    vector<char> hola={'0','0','0','0','0'};
    vector<int> nums;
    string num="";
    char nchar;
    if(n<=9)
    {
        nchar=n+48;
        hola[hola.size()-1]=nchar;
    }
    else
    {
        if(n<=99)
        {
            for(int i=0;i<2;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=999)
        {
            for(int i=0;i<3;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=9999)
        {
            for(int i=0;i<4;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
        else if(n<=99999)
        {
            for(int i=0;i<5;i++)
            {
                int aux=n%10;
                hola[hola.size()-1-i]=aux+48;
                n=n/10;
            }
        }
    }
    for(auto n:hola) num+=n;
    return num;
}
bool esNumero(char* num)
{

    for(int i=0;i<strlen(num);i++)
    {
        if (!isdigit(num[i]))
            return false;
    }
    return true;
}
