#include<stdio.h>

int main(){
    int dia, mes, anio;

    printf("ingrese el dia: ");
    scanf("%i", &dia);

    printf("ingrese el mes: ");
    scanf("%i", &mes);

    printf("ingrese el año: ");
    scanf("%i", &anio);

    if (mes >= 1 && mes <= 3)
    {
        printf("corresponde al primer trimestre del año");
    }else{
        printf("no corresponde al primer trimestre del año");
    }
    
    return 0;
}