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


int main()
{
    eEmpleado plantel[] = {{ 1234, "Marcos", 'm', 30000.00,{23,10,2000} }, { 1111, "Lucas", 'm', 20000.00,{22,11,2003} }, { 2222, "John", 'm', 10000.00,{20,9,2010} }};


   /* eEmpleado otroEmpleado;
    unEmpleado = conseguirEmpleado();
    mostrarEmpleado(unEmpleado);*/

    return 0;
}






