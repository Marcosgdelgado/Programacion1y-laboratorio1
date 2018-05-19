#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idTipo;
    char descripcion[20];
}eTipo;

typedef struct{
    int id;
    char nombre[20];
    int edad;
    eTipo tipo;
}eMascota;


int main()
{
  eMascota unaMascota;
  unaMascota.edad=5;
  unaMascota.id=1234;
  strcpy(unaMascota.nombre, "colita");

  modficarEdad(&unaMascota, 20);
  printf("%d %s %d\n\n", unaMascota.id, unaMascota.nombre, unaMascota.edad);

  return 0;
}
void modficarEdad(eMascota*x, int edad){

    x->edad=edad;
}
