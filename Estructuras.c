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




void mostrarEmpleado(eEmpleado emp){

    printf("\nLegajo: %d\n", emp.legajo);
    printf("Nombre: %s\n", emp.nombre);
    printf("Sexo: %c\n", emp.sexo);
    printf("Sueldo: %.2f\n", emp.sueldo);
    printf("Fecha de ingreso: %d/%d/%d\n", emp.fechaIngreso);



}

eEmpleado conseguirEmpleado(){

    eEmpleado emp;

    printf("Numero de legajo: ");
    fflush(stdin);
    scanf("%d", &emp.legajo);

    printf("Nombre del empleado: ");
     fflush(stdin);
    gets(emp.nombre);

    printf("ingrese sexo: ");
     fflush(stdin);
    scanf("%c", &emp.sexo);

    printf("Ingrese sueldo: ");
     fflush(stdin);
    scanf("%f", &emp.sueldo);

    printf("Ingrese fecha de ingreso d m a: ");
    scanf("%d %d %d", &emp.fechaIngreso.dia, &emp.fechaIngreso.mes, &emp.fechaIngreso.anio);

    return emp;

}

void mostrarEmpleados(eEmpleado gente[], int tam)
{
    for(int i=0; i<tam; i++){
        mostrarEmpleado(gente[i]);
    }
}

void ordenamientoEmpleados(eEmpleado gente[], int tam){

    switch
    {
        case:
    }



}
