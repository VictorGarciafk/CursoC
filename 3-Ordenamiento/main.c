#include<stdio.h>

void ordenamientoMenorAMayor();
void valorMasAlto();
void valorMasBajo();


//ordenar de menor a mayor los 5 numeros a ingresar
int main(){

    int choice;
    void(*ordenamiento[3])() = { ordenamientoMenorAMayor, valorMasAlto, valorMasBajo };
    
    printf("Seleccione uno de los siguientes ejercicios de ordenamiento\n");
    printf("1.Ordenamiento de menor a mayor\n2.Valor mas alto\n3.Valor mas bajo\n");
    scanf("%d", &choice);
    choice--;

    if (choice>=0 && choice < 3)
    {
        ordenamiento[choice]();
    }else{
        printf("Opcion no encontrada");
    }
    
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

//se ingresa 5 numeros y se busca el valor mas alto y su posicion en el array
void valorMasAlto(){
    int numero[5];
    int i, pos, aux;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese el valor #%i: ", (i+1));
        scanf("%i", &numero[i]);
    }
    pos = 0;
    aux = numero[0];

    for (i = 1; i < 5; i++)
    {
        if (numero[i] > aux)
        {
            pos = i;
        }
    }
    
    printf("el valor mas alto es %i que se encuentra en la posicion %i", numero[pos], pos);
}

//se ingresa 5 numeros y se busca el valor mas bajo y cuantas veces se repite
void valorMasBajo(){
    int numero[5];
    int i, pos, rep, aux;
    rep = 0;
    for (i = 0; i < 5; i++)
    {
        printf("ingrese el valor #%i: ", (i+1));
        scanf("%i", &numero[i]);
    }
    pos = 0;
    aux = numero[0];

    for (i = 1; i < 5; i++)
    {
        if (numero[i] < aux)
        {
            pos = i;
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (numero[i] == numero[pos])
        {
            rep ++;
        }
    }
    
    
    printf("el valor mas bajo es %i y se repite %i veces", numero[pos], rep);
}