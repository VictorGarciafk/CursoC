#include<stdio.h>
#include<string.h>

#define TAMANO 5
#define FINPROGRAMA "programa finalizado"

int main(){
    int sueldos[TAMANO] = {1,2,3,4,5};
    int i;

    for (i = 0; i < TAMANO; i++)
    {
        printf("%i", sueldos[i]);
    }
    

    printf(FINPROGRAMA);
    return 0;
}