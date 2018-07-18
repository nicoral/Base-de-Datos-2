#include "update.h"

void machine_attributes::bloquear()
{
    this->bloqueada=true;
}
void machine_attributes::desbloquear()
{
    this->bloqueada=false;
}
void task_usage::bloquear()
{
    this->bloqueada=true;
}
void task_usage::desbloquear()
{
    this->bloqueada=false;
}
void machine_events::bloquear()
{
    this->bloqueada=true;
}
void machine_events::desbloquear()
{
    this->bloqueada=false;
}
void task_constraints::bloquear()
{
    this->bloqueada=true;
}
void task_constraints::desbloquear()
{
    this->bloqueada=false;
}
void task_events::bloquear()
{
    this->bloqueada=true;
}
void task_events::desbloquear()
{
    this->bloqueada=false;
}
void job_events::bloquear()
{
    this->bloqueada=true;
}
void job_events::desbloquear()
{
    this->bloqueada=false;
}

bool machine_attributes::Estado()
{
    return this->bloqueada;
}
bool machine_events::Estado()
{
    return this->bloqueada;
}
bool task_constraints::Estado()
{
    return this->bloqueada;
}
bool task_events::Estado()
{
    return this->bloqueada;
}
bool job_events::Estado()
{
    return this->bloqueada;
}
bool task_usage::Estado()
{
    return this->bloqueada;
}

