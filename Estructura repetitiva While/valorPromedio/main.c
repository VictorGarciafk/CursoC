#include<stdio.h>

int main(){
    int valor, x = 1, suma = 0;

    float promedio;

    while (x <= 10)
    {
        printf("ingrese el valor %i: ", x);
        scanf("%i", &valor);
        suma += valor;
        x++;
    }

    promedio = (float)suma / 10;

    printf("el promedio de los %i valores es %.2f", (x-1), promedio);

    return 0;
    
}