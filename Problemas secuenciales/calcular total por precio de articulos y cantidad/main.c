#include<stdio.h>
#include<conio.h>

int main(){
    int cantidad;
    float precio, total;

    printf("ingresa el precio del articulo: ");
    scanf("%f", &precio);

    printf("ingresa la cantidad de articulos: ");
    scanf("%i", &cantidad);

    total = cantidad * precio;

    printf("el total es: ");
    printf("%.2f", total);
    getch();

    return 0;
}
