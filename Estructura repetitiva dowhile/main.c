#include<stdio.h>

int main(){
    int contador, suma, promedio, valor;

    suma = contador = 0;

    do{

        printf("ingrese el valor a sumar: ");
        scanf("%i", &valor);

        if (valor != 0)
        {
            suma += valor;
            contador++;
        }
    }while (valor !=0);    

    promedio = suma/contador;

    printf("el promedio de todos los valores ingresados es: %i", promedio);
    return 0;
}