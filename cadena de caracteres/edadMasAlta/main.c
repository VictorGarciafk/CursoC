#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char buff[31];
    char nombre1[31];
    char nombre2[31];
    int edad1;
    int edad2;

    memset(nombre1, '\0', sizeof(nombre1));
    memset(nombre1, '\0', sizeof(nombre2));

    printf("ingrese el nombre de la primer persona: ");
    scanf("%s",buff);

    strcpy(nombre1, buff);
    memset(buff, '\0', sizeof(buff));

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad1);

    printf("ingrese el nombre de la primer persona: ");
    scanf("%s",buff);

    strcpy(nombre2, buff);
    memset(buff, '\0', sizeof(buff));

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
    {
        printf("La persona con mas edad es %s", nombre1);
    }else if(edad2 > edad1){
        printf("La persona con mas edad es %s", nombre2);
    }else{
        printf("La persona %s y la persona %s tienen la misma edad", nombre1, nombre2);
    }
    
}