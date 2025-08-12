#include<stdio.h>
#include<string.h>

int main(){
    char nombre1[35], nombre2[35];
    int edad1, edad2;

    printf("ingrese el nombre de la primera persona: ");
    fgets(nombre1, sizeof(nombre1), stdin);

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad1);

    fflush(stdin);

    printf("ingrese el nombre de la segunda persona: ");
    fgets(nombre2, sizeof(nombre2), stdin);

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
    {
        printf("la persona con mayor edad es: %s", nombre1);
    }else if (edad2 > edad1)
    {
        printf("la persona con mayor edad es: %s", nombre2);
    }else
    {
        printf("la persona %s y la persona %s tienen la misma edad", nombre1, nombre2);
    }
    
    

    

    return 0;
}