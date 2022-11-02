#include <stdio.h>

int main()
{

FILE *positivos, *negativos;

positivos = fopen("numero1.txt", "w");
negativos = fopen("numero2.txt", "w");


if (positivos == NULL){
printf("No se encontro el archivo: "); 

return 1;
}
if (negativos == NULL){
printf("No se encontro el archivo: "); 

return 1;
}

int numero1 = 1;

do {


printf("ingrese un numero entero: ");
scanf("%d", &numero1);
if(numero1<0){
fprintf(negativos, "%d \n", numero1);
} else if(numero1>0){
fprintf(positivos, "%d \n", numero1);
}



} while(numero1 !=0);


fclose(positivos);
    return 0;
}