#include "Tablas.h"

string machine_attributes::NewLine(string ID)
{
    char* aux=new char[1000];
    cout<<"Introducir el nuevo valor para el campo TimeSpamp (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo Attribute_Name"<<endl;cin>>this->attribute_name;
    cout<<"Introducir el nuevo valor para el campo Attribute_Value"<<endl;cin>>this->attribute_value;
    cout<<"Introducir el nuevo valor para el campo Attribute_Deleted (booleano)"<<endl;cin>>aux;
    if(!esNumero(aux) && (aux!="0" || aux!="1")) return "Error";
    string str2(aux);
    string Newline=str+','+ID+','+this->attribute_name+','+this->attribute_value+','+str2;
    return Newline;
}
string machine_events::NewLine(string ID)
{
    char* aux=new char[1000];
    cout<<"Introducir el nuevo valor para el campo TimeSpamp (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo Platform_ID"<<endl;cin>>this->platform_ID;
    cout<<"Introducir el nuevo valor para el campo Capacity_CPU"<<endl;cin>>this->capacity_CPU;
    cout<<"Introducir el nuevo valor para el campo Capacity_Memory"<<endl;cin>>this->capacity_memory;
    string str(aux);
    string Newline=str+','+ID+','+this->event_type+','+this->platform_ID+','+capacity_CPU+','+capacity_memory;
    return Newline;
}
string job_events::NewLine(string ID)
{
    char* aux=new char[1000];
    cout<<"Introducir el nuevo valor para el campo TimeSpamp (enetero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    cout<<"Introducir el nuevo valor para el campo Missing_Info"<<endl;cin>>this->missing_info;
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo User_Name"<<endl;cin>>this->user_name;
    cout<<"Introducir el nuevo valor para el campo Scheduling_Class"<<endl;cin>>this->scheduling_class;
    cout<<"Introducir el nuevo valor para el campo Logical_Job_Name"<<endl;cin>>this->logical_job_name;
    string str(aux);
    string Newline=str+','+','+ID+','+this->missing_info+','+this->event_type+','+this->user_name+','+this->scheduling_class+','+this->logical_job_name;
    return Newline;
}
string task_constraints::NewLine(string ID)
{
    char* aux=new char[1000];
    cout<<"Introducir el nuevo valor para el campo TimeSpamp (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo task_index (entero)"<<endl;cin>>aux;
    if(!esNumero(aux)) return "Error";
    string str2(aux);
    cout<<"Introducir el nuevo valor para el campo Attribute_Name"<<endl;cin>>this->attribute_name;
    cout<<"Introducir el nuevo valor para el campo Comparison_Operator"<<endl;cin>>this->comparison_operator;
    cout<<"Introducir el nuevo valor para el campo Attribute_Value"<<endl;cin>>this->attribute_value;

    string Newline=str+','+ID+','+str2+','+this->attribute_name+','+this->comparison_operator+','+attribute_value;
    return Newline;
}
string task_events::NewLine(string ID)
{
    char* aux=new char[1000];
    cout<<"Introducir el nuevo valor para el campo TimeSpamp (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo Missing_Info"<<endl;cin>>this->missing_info;
    cout<<"Introducir el nuevo valor para el campo Machine_ID (entero)"<<endl;cin>>aux;
    if(!esNumero(aux)) return "Error";
    string str2(aux);
    cout<<"Introducir el nuevo valor para el campo Event_Type"<<endl;cin>>this->event_type;
    cout<<"Introducir el nuevo valor para el campo user_name"<<endl;cin>>this->user_name;
    cout<<"Introducir el nuevo valor para el campo scheduling_class"<<endl;cin>>this->scheduling_class;
    cout<<"Introducir el nuevo valor para el campo priority (entero)"<<endl;cin>>aux;
    if(!esNumero(aux)) return "Error";
    string str3(aux);
    cout<<"Introducir el nuevo valor para el campo resource_request_for_CPU_cores"<<endl;cin>>this->resource_request_for_CPU_cores;
    cout<<"Introducir el nuevo valor para el campo resource_request_for_RAM"<<endl;cin>>this->resource_request_for_RAM;
    cout<<"Introducir el nuevo valor para el campo resource_request_for_local_disk_space"<<endl;cin>>this->resource_request_for_local_disk_space;
    cout<<"Introducir el nuevo valor para el campo different_machine_constraint"<<endl;cin>>this->different_machine_constraint;

    string Newline=str+','+this->missing_info+','+ID+','+str2+','+this->event_type+','+this->user_name+','+this->scheduling_class+','+str3+this->resource_request_for_CPU_cores+','+this->resource_request_for_RAM+','+this->resource_request_for_local_disk_space+','+this->different_machine_constraint;
    return Newline;
}
string task_usage::NewLine(string ID)
{
    char* aux=new char[1000];
        cout<<"Introducir el nuevo valor para el campo Start Time (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str(aux);
    cout<<"Introducir el nuevo valor para el campo End Time (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str2(aux);
    cout<<"Introducir el nuevo valor para el campo task_index (entero)"<<endl;cin>>aux;
    if(!esNumero(aux))return "Error";
    string str3(aux);
    cout<<"Introducir el nuevo valor para el campo Machine_ID"<<endl;cin>>this->machine_ID;
    cout<<"Introducir el nuevo valor para el campo mean_CPU_usage_rate"<<endl;cin>>this->mean_CPU_usage_rate;
    cout<<"Introducir el nuevo valor para el campo canonical_memory_usage"<<endl;cin>>this->canonical_memory_usage;
    cout<<"Introducir el nuevo valor para el campo assigned_memory_usage"<<endl;cin>>this->assigned_memory_usage;
    cout<<"Introducir el nuevo valor para el campo unmapped_page_cache_memory_usage"<<endl;cin>>this->unmapped_page_cache_memory_usage;
    cout<<"Introducir el nuevo valor para el campo total_page_cache_memory_usage"<<endl;cin>>this->total_page_cache_memory_usage;
    cout<<"Introducir el nuevo valor para el campo maximun_memory_usage"<<endl;cin>>this->maximun_memory_usage;
    cout<<"Introducir el nuevo valor para el campo mean_disk_IO_time"<<endl;cin>>this->mean_disk_IO_time;
    cout<<"Introducir el nuevo valor para el campo mean_local_disk_space_used"<<endl;cin>>this->mean_local_disk_space_used;
    cout<<"Introducir el nuevo valor para el campo maximun_CPU_usage"<<endl;cin>>this->maximun_CPU_usage;
    cout<<"Introducir el nuevo valor para el campo maximun_disk_IO_time"<<endl;cin>>this->maximun_disk_IO_time;
    cout<<"Introducir el nuevo valor para el campo cycles_per_instruction_CPI"<<endl;cin>>this->cycles_per_instruction_CPI;
    cout<<"Introducir el nuevo valor para el campo memory_accesses_per_instruction_MAI"<<endl;cin>>this->memory_accesses_per_instruction_MAI;
    cout<<"Introducir el nuevo valor para el campo sample_portion"<<endl;cin>>this->sample_portion;
    cout<<"Introducir el nuevo valor para el campo aggregation_type"<<endl;cin>>this->aggregation_type;
    cout<<"Introducir el nuevo valor para el campo sampled_CPU_usage"<<endl;cin>>this->sampled_CPU_usage;
    string Newline=str+','+str2+','+ID+','+str3+','+this->machine_ID+','+this->mean_CPU_usage_rate+','+this->canonical_memory_usage+','+this->assigned_memory_usage+','+this->unmapped_page_cache_memory_usage+','+this->total_page_cache_memory_usage+','+this->maximun_memory_usage+','+this->mean_disk_IO_time+','+this->mean_local_disk_space_used+','+this->maximun_CPU_usage+','+this->maximun_disk_IO_time+','+this->cycles_per_instruction_CPI+','+this->memory_accesses_per_instruction_MAI+','+this->sample_portion+','+this->aggregation_type+','+this->sampled_CPU_usage;
    return Newline;
}
