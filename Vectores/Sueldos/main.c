#include<stdio.h>

int main(){
    int sueldos[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese el sueldo %i: ", (i+1));
        scanf("%i", &sueldos[i]);
    }

    printf("lo sueldos ingresados fueron\n");
    
    for (i = 0; i < 5; i++)
    {
        printf("%i: %i\n", (i+1) , sueldos[i]);
    }
    

    return 0;
}