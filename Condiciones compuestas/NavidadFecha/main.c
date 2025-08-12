#include<stdio.h>

int main(){
    int dia, mes, anio;

    printf("ingrese el dia: ");
    scanf("%i", &dia);

    printf("ingrese el mes: ");
    scanf("%i", &mes);

    printf("ingrese el año: ");
    scanf("%i", &anio);

    if (mes == 12 && dia == 25)
    {
        printf("Feliz navidad");
    }else{
        printf("Aun no es navidad");
    }
    
    return 0;
}