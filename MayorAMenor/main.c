#include<stdio.h>
#include<string.h>

int ejercicio1();
int ejercicio2();

int main(){

    //ejercicio1();
    ejercicio2();

    return 0;
}

int ejercicio1(){
    int numero[5];
    int i, pos;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese el valor #%i: ", (i+1));
        scanf("%i", &numero[i]);
    }
    pos = 0;

    for (i = 1; i < 5; i++)
    {
        if (numero[i] > numero[i-1])
        {
            pos = i;
        }
    }
    
    printf("el valor mas alto es %i que se encuentra en la posicion %i", numero[pos], pos);
}

int ejercicio2(){
    int numero[5];
    int i, pos, rep;
    rep = 0;
    for (i = 0; i < 5; i++)
    {
        printf("ingrese el valor #%i: ", (i+1));
        scanf("%i", &numero[i]);
    }
    pos = 0;

    for (i = 1; i < 5; i++)
    {
        if (numero[i] < numero[i-1])
        {
            pos = i;
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (numero[i] == numero[pos])
        {
            rep ++;
        }
    }
    
    
    printf("el valor mas bajo es %i y se repite %i veces", numero[pos], rep);
}