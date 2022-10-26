#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //declarando las variables que acepten strings
char palabra[50], word[50];
int n, x, a =0, p = 0, e =0;
char espacio=' '; //
int i;

//pidiendo al usario ingresar una palabra
printf("escriba una palabra: ");
scanf("%s", palabra);
n = strlen(palabra); //que cuente el numero de caracteres que ingreso el usuario


for (i = 0;  i<=n;i++){
    
            if(palabra[i]==espacio)
            i++;
            word[e] =palabra[i];
            e++;
    
}

// en este for determinamos si es un palindromo o no
                        for(x=n-1;x>=0;x--){
                            if(word[x]==word[a])
                            p++;
                            a++;
                        }
                        //si la primera letra es igual a la ultima
                        if(p==n)
                            printf("es un palidromo: \n");
                            else
                            printf("no es palindromo \n");



return 0;
}
