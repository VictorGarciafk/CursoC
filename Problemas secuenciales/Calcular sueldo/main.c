#include<stdio.h>

int main(){
    float horasTrabajadas;
    float costoHoras;
    float sueldo;

    printf("Ingrese las horas trabajadas al mes: ");
    scanf("%f", &horasTrabajadas);

    printf("Ingrese el sueldo por hora: ");
    scanf("%f", &costoHoras);

    sueldo = horasTrabajadas*costoHoras;

    printf("el sueldo mensual es: $");
    printf("%.2f\n", sueldo);
    return 0;
}
