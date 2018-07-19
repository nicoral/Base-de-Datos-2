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
    string insertJE(string ID,string newline);
    char *selectJE(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
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
    string insertMA(string ID,string newline);
    char *selectMA(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
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
    string insertME(string ID,string newline);
    string selectME(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
};
class task_constraints
{
public:
    int timestamp;
    int job_ID;
    int task_index;
    string attribute_name;
    string comparison_operator;
    string attribute_value;

    int cantidad=500;
    string archivo="task_constraints";
    int indice=2;
    bool bloqueada=false;

    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesTC();
    string insertTC(string ID,string newline);
    char *selectTC(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
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
    string insertTE(string ID,string newline);
    char *selectTE(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
};
class task_usage
{
public:
    int start_time;
    int end_time;
    int task_index;
    string machine_ID;
    string mean_CPU_usage_rate;
    string canonical_memory_usage;
    string assigned_memory_usage;
    string unmapped_page_cache_memory_usage;
    string total_page_cache_memory_usage;
    string maximun_memory_usage;
    string mean_disk_IO_time;
    string mean_local_disk_space_used;
    string maximun_CPU_usage;
    string maximun_disk_IO_time;
    string cycles_per_instruction_CPI;
    string memory_accesses_per_instruction_MAI;
    string sample_portion;
    string aggregation_type;
    string sampled_CPU_usage;

    int cantidad=500;
    string archivo="task_usage";
    int indice=3;
    bool bloqueada=false;
    void bloquear();
    void desbloquear();
    bool Estado();
    void indicesTU();
    string insertTU(string ID,string newline);
    char *selectTU(string ID);
    string update(string ID,string NewLine);
    string Delete(string ID);
    string NewLine(string ID);
};

