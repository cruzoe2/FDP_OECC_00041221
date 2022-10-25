
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//inclui estas biblotecasn para poner numeros aleatorios
int main()
{
    //cree las variables que utilizare 
    int num;
    int contador;
    int num2;
srand(time(NULL));
//use srand para numero aleaaotrios
//pedi los datos y los guarde 
 printf("ingrese el tamaño del arreglo   ");
scanf("%d",&num);
//cree un for para el arreglo
  int array[num];
  for(int i=0;i<num;i++){
      array[i]=rand() % 10 + 1 ;
      //use rand para numero aleatorios y los espcifique del 1 al 10
     printf("%d ,",array[i]); 
  }
  //pedi los datos que se repiten y use una condicion if para saber cuantas veces se repite
 printf("ingrese el numero que se repite");
 scanf("%d",&num2);
  for(int i=0;i<num;i++){
      if (array[i]== num2){
          contador++;
      }
  }
  printf("se repite %d  ",contador);
  
    return 0;
}
