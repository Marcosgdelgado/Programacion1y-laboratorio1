#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;

}eEmpleado;

void mostrarEmpleado(eEmpleado);

eEmpleado conseguirEmpleado();
