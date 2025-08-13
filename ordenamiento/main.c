#include<stdio.h>

void ordenamientoMenorAMayor();
//ordenar de menor a mayor los 5 numeros a ingresar
int main(){

    ordenamientoMenorAMayor();

    return 0;
}

//el metodo de ordenamiento utilizado es el selection sort
void ordenamientoMenorAMayor(){
    int num[5] = {25, 72, 1, 98, 4};
    int i, j, aux, pos;

    for (i = 0; i < 5; i++)
    {
        pos = i;
        for (j = (i+1); j < 5; j++)
        {
            if (num[j] < num[pos])
            {
                pos = j;
            }
        }

        aux = num[pos];
        num[pos] = num[i];
        num[i] = aux;
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("%i\n", num[i]);
    }
}