#include<stdio.h>

int main(){
    float lado;
    float area;

    printf("ingrese el valor de un lado del cuadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("el area del cuadrado es: ");
    printf("%.2f", area);

    return 0;
}
