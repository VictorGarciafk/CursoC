#include<stdio.h>
#include<string.h>

void primerEjercicio();
int cargarEnteros(int num[5]);
int mostrarEnteros();

//ADVERTENCIA!!!
//No utilizar este codigo hasta saber bien como funciona pasar parametros
//el uso de este codigo puede sobrescribir el lugar en la memoria de las variables por lo cual puede
//hacer que el sistema operativo crashee y requiera un reinicio para volver a la normalidad

int main(){

    primerEjercicio();
    return 0;
}

void primerEjercicio(){
    int numeros[5];
    cargarEnteros(&numeros);
    mostrarEnteros(&numeros);
}

int cargarEnteros(int* num[5]){
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("ingrese el valor #%i: ", (i+1));
        scanf("%i", &num[i]);
    }
}

int mostrarEnteros(int* num[5]){
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n");
    }
    
}