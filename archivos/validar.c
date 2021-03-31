#include <stdio.h>


int main(void)
{
  FILE *ptr_fichero;
  char nombre_fichero[] = "resumen.txt";
  ptr_fichero = fopen(nombre_fichero, "r");
  if (ptr_fichero == NULL){
    printf("No se ha podido abrir el fichero %s.\n", nombre_fichero);
  }
  else 
  {
    printf("Abierto fichero; listos para cerrarlo.\n");
    if (fclose(ptr_fichero)!=0) 
    {
      printf("No se ha podido cerrar el fichero %s.\n", nombre_fichero);
    }
  }
  return 0;
}