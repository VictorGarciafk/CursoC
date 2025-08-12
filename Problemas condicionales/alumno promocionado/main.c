#include<stdio.h>
#include<conio.h>

int main(){

    float nota1, nota2, nota3, promedio;

    printf("ingrese la primera nota del alumno: ");
    scanf("%f", &nota1);

    printf("ingrese la segunda nota del alumno: ");
    scanf("%f", &nota2);

    printf("ingrese la segunda nota del alumno: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;
    printf("promedio: %.2f\n", promedio);

    if (promedio >= 7)
    {
        printf("promocionado");
    }else{
        printf("no promocionado");
    }
    getch();
    
    return 0;
}