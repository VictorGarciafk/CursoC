#include<stdio.h>
#include<string.h>

struct producto{
    int idProducto;
    char nombre[31];
    float precio
};

void ejercicio1();

int main(){

    //ejercicio1();

    return 0;
}

void ejercicio1(){

    struct producto prdct[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("producto #%i\n", i+1);

        printf("ingrese el codigo del producto: ");
        scanf("%i", &prdct[i].idProducto);

        printf("ingrese el nombre del producto: ");
        scanf(" %[^\n]", prdct[i].nombre);

        printf("ingrese el precio del producto: ");
        scanf("%f", &prdct[i].precio);

        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    }
    
    printf("los productos ingresados son los siguientes: ");

    for (i = 0; i < 2; i++)
    {
        printf("\n#%i-codigo: %i", i, prdct[i].idProducto);
        printf("\n#%i-nombre: %s", i, prdct[i].nombre);
        printf("\n#%i-precio: %f", i, prdct[i].precio);
    }
    
}