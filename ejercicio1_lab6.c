#include <stdio.h>
#include <string.h>

int
main ()
{

// declaracion de variables
  char texto[100];
  char text2[50];
  char *text3;

//pidiendo al usario ingresar un texto
  printf ("Ingrese un texto: ");
  fgets (texto, sizeof (texto), stdin);
  puts (texto);

// pidiendo que ingrese la palabra que desea buscar
  printf ("ingrese la palabra que desea buscar: ");
  scanf ("%s", text2);

//al macenando un ocurrencia en la variable text3, strstr busca una coincidencia entre arreglos
  text3 = strstr (texto, text2);

//mostrar el resultado

  if (text3)
    {

      printf ("OCURRENCIA ENCONTRADA \n");
      printf ("   \n");
      printf ("Se ha encontradoo la ocurrencia %s, en %s", text2, texto);
    }
  else
    {
      printf ("no ocurrencias encontradas ");
    }






/*printf("Ingrese la combinacion de letras que desea buscar: ");
fgets(text2, sizeof(text2), stdin);

text3 = strstr(texto, text2);

if(text3){
    printf("Arreglo encontrado: ");
    printf("Se ha encontrado la ocurrencia %s en %s",text2, texto);
    
} else {
    
    printf("No se han encontrado ocurrencias");
}*/


  return 0;
}
