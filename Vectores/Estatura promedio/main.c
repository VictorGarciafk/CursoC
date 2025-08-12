#include<stdio.h>

int main(){

    float estaturas[5];
    float promedio, suma;
    int i, pAltas, pBajas;

    suma = 0;
    pAltas = 0;
    pBajas = 0;

    for (i = 0; i < 5; i++)
    {
        printf("ingresa la estatura: ");
        scanf("%f", &estaturas[i]);
        suma += estaturas[i];
    }

    promedio = suma/5;

    printf("el promedio de las 5 estaturas es: %.2f\n", promedio);

    for ( i = 0; i < 5; i++)
    {
        if (estaturas[i] >= promedio)
        {
            pAltas++;
        }else{
            pBajas++;
        }
    }
    
    printf("%i son mas bajas que el promedio y %i son mas altos que el promedio.", pBajas, pAltas);
    
    return 0;
}