#include "includes.h"
const int TABLE_SIZE = 100000;
class LinkedHashEntry {
private:
      LinkedHashEntry *next;
public:
    int ID;
    int posicion;
    int PArchivo;
    LinkedHashEntry(int ID,int posicion,int PArchivo) {
        this->ID = ID;
        this->posicion=posicion;
        this->next = NULL;
    }
    int getValue() { return ID; }
    int getposicion(){return posicion;}
    LinkedHashEntry *getNext() {  return next;  }
    void setNext(LinkedHashEntry *next) {  this->next = next;  }
};

class HashMap {
private:
      LinkedHashEntry **table;

public:
    int tam=0;
    void AmpliTam(){tam++;}
    HashMap()
    {
        table = new LinkedHashEntry*[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++)
                table[i] = NULL;
    }
    int get(int value)
    {
        LinkedHashEntry *A;
        for(int i=0;i<tam;i++)
        {
            A=table[i];
            while(A)
            {
                if(A->ID==value)
                {
                    return i;
                }
                A=A->getNext();
            }
        }
        return -1;
    }
    void CountAdelan(int value);
    void put(int value,string destino);
    void despegar(int value);
    void mostrar();
    ~HashMap()
    {
        for (int i = 0; i < TABLE_SIZE; i++)
            if (table[i] != NULL)
            {
                LinkedHashEntry *prevEntry = NULL;
                LinkedHashEntry *entry = table[i];
                while (entry != NULL) {
                    prevEntry = entry;
                    entry = entry->getNext();
                    delete prevEntry;
                }
            }
        delete[] table;
    }
};
