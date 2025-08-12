#include<stdio.h>
#include<string.h>

int AreaCuadrado();

int main(){

    //primer ejercicio
    int ladoCuadrado, area;

    printf("ingresa el valor del lado del cuadrado: ");
    scanf("%i", &ladoCuadrado);

    area = AreaCuadrado(ladoCuadrado);

    printf("el area del cuadrado es: %i", area);

    return 0;
}

//primer ejercicio
int AreaCuadrado(int lado){
    int a = 0;

    a = lado*lado;

    return a;
}


