#include<stdio.h>
#include<conio.h>

int main(){

    float nota1, nota2, nota3, promedio;

    printf("ingrese la primera nota del alumno: ");
    scanf("%f", &nota1);

    printf("ingrese la segunda nota del alumno: ");
    scanf("%f", &nota2);

    printf("ingrese la tercera nota del alumno: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;

    if (promedio >= 7)
    {
        printf("Excelente");
    }else if (promedio>=4)
    {
        printf("Regular");
    }else{
        printf("Reprobado");
    }
    getch();

    return 0;
}