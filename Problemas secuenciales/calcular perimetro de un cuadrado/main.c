#include<stdio.h>
#include<conio.h>

int main(){
    int lado, perimetro;

    printf("ingresar el valor del lado conocido: ");
    scanf("%i", &lado);

    perimetro = lado * 4;

    printf("el perimetro del cuadrado es: ");
    printf("%i", perimetro);
    getch();

    return 0;
}
