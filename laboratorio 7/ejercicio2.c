#include <stdio.h>

int main()
{

    FILE *palabra;

    palabra = fopen("palabrita.txt", "w");

    if (palabra == NULL)
    {

        printf("no hay archivo: ");
        return 1;
    }

    char arreglo[10];
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    printf("Ingrese una palabra con diez letras: ");
    fgets(arreglo, sizeof(arreglo), stdin);

    for (int i = 0; i < 10; i++)
    {

        switch (arreglo[i])
        {
        case 'a':
            cont1++;
            break;
        case 'e':
            cont2++;
            break;
        case 'i':
            cont3++;
            break;
        case 'o':
            cont4++;
            break;
        case 'u':
            cont5++;
            break;
        }
    }

    fprintf(palabra,"\n El numeor de letras a que se encontraron es %d ", cont1);
    fprintf(palabra,"\n El numeor de letras e que se encontraron es %d ", cont2);
    fprintf(palabra,"\n El numeor de letras i que se encontraron es %d ", cont3);
    fprintf(palabra,"\n El numeor de letras o que se encontraron es %d ", cont4);
    fprintf(palabra,"\n El numeor de letras u que se encontraron es %d ", cont5);

    return 0;

}