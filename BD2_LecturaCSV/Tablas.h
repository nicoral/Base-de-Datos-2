#include "Hash.h"
#include "FBasicas.h"
#include "PrymariQueue.h"
class job_events
{
public:
    int timespamp;
    string missing_info;
    int job_ID;
    string event_type;
    string user_name;
    string scheduling_class;
    string job_name;
    string logical_job_name;

    int cantidad=500;
    string archivo="job_events";
    int indice=3;
    int datos=2012242;

    bool bloqueada=false;
    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesJE();
    void insertJE(string ID,string newline);
    char *selectJE(string ID);
    string update(string ID);
    string Delete(string ID);
};
class machine_attributes
{
public:
    int timestamp;
    int machine_ID;
    string attribute_name;
    string attribute_value;
    bool attribute_deleted;

    int cantidad=1;
    string archivo="machine_attributes";
    int indice=2;
    bool bloqueada=false;

    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesMA();
    void insertMA(string ID,string newline);
    char *selectMA(string ID);
    string update(string ID);
    string Delete(string ID);
};
class machine_events
{
public:
    int timestamp;
    int machine_ID;
    string event_type;
    string platform_ID;
    string capacity_CPU;
    string capacity_memory;

    int cantidad=1;
    string archivo="machine_events";
    int indice=2;
    bool bloqueada=false;

    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesME();
    void insertME(string ID,string newline);
    string selectME(string ID);
    string update(string ID);
    string Delete(string ID);
};
class task_constraints
{
public:
    int timestamp;
    int job_ID;
    int task_index;
    string attribute_name;
    char comparison_operator;
    string attribute_value;

    int cantidad=500;
    string archivo="task_constraints";
    int indice=2;
    bool bloqueada=false;

    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesTC();
    void insertTC(string ID,string newline);
    char *selectTC(string ID);
    string update(string ID);
    string Delete(string ID);
};
class task_events
{
public:
    int timestamp;
    string missing_info;
    int job_ID;
    string task_index;
    int machine_ID;
    string event_type;
    string user_name;
    string scheduling_class;
    int priority;
    string resource_request_for_CPU_cores;
    string resource_request_for_RAM;
    string resource_request_for_local_disk_space;
    string different_machine_constraint;

    int cantidad=500;
    string archivo="task_events";
    int indice=3;
    bool bloqueada=false;
    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesTE();
    void indices2TE();
    void insertTE(string ID,string newline);
    char *selectTE(string ID);
    string update(string ID);
    string Delete(string ID);
};
class task_usage
{
public:
    int cantidad=500;
    string archivo="task_usage";
    int indice=4;
    bool bloqueada=false;
    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesTU();
    void insertTU(string ID,string newline);
    char *selectTU(string ID);
    string update(string ID);
    string Delete(string ID);
};

