#include<stdio.h>

int main(){
    int valor, suma;
    char confirmacion;

    suma = 0;

    do
    {
        printf("ingresa un valor: ");
        scanf("%i", &valor);

        suma += valor;

        printf("Desea agregar otro valor?(S/N): ");
        scanf(" %c", &confirmacion);

        while(confirmacion !=78 && confirmacion !=110 && confirmacion !=83 && confirmacion !=115)
        {
            printf("Favor de ingresar una de las opciones(S/N): ");
            scanf(" %c", &confirmacion);
        }
        

    } while (confirmacion == 's' || confirmacion == 'S');
    
    printf("La suma de todos los valores es: %i", suma);

    return 0;
}