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
    void indicesJE();
    char *selectJE(string ID);
    string update(string ID,string C2);
};
class machine_attributes
{
public:
    /**
    int timestamp;
    int machine_ID;
    string attribute_name;
    string attribute_value;
    bool attribute_deleted;
    */
    int cantidad=1;
    string archivo="machine_attributes";
    int indice=2;
    void indicesMA();
    char *selectMA(string ID);
    string update(string ID,string C2);
};
class machine_events
{
public:
    /**
    int timestamp;
    int machine_ID;
    string event_type;
    string platform_ID;
    string capacity_CPU;
    string capacity_memory;
    */
    int cantidad=1;
    string archivo="machine_events";
    int indice=2;

    void indicesME();
    string selectME(string ID);
    string update(string ID,string C2);
};
class task_constraints
{
public:
    /**
    int timestamp;
    int job_ID;
    int task_index;
    string attribute_name;
    char comparison_operator;
    string attribute_value;
    */
    int cantidad=500;
    string archivo="task_constraints";
    int indice=2;

    void indicesTC();
    char *selectTC(string ID);
    string update(string ID,string C2);
};
class task_events
{
public:
    /**
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
    */
    int cantidad=500;
    string archivo="task_events";
    int indice=3;

    void indicesTE();
    void indices2TE();
    char *selectTE(char* ID);
    string update(string ID,string C2);
};


