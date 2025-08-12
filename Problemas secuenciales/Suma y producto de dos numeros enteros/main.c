#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2, suma, producto;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    suma = num1 + num2;
    producto = num1 * num2;

    printf("la suma de los dos numeros es: ");
    printf("%i\n", suma);

    printf("el producto de los dos numeros es: ");
    printf("%i", producto);

    //evitamos que el programa cierre de forma automatica en el archivo executable
    //la funcion getch viene de los paquetes de conio.h
    getch();

    return 0;
}
