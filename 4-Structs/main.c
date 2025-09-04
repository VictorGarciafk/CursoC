#include<stdio.h>
#include<string.h>

struct fVencimiento{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int idProducto;
    char nombre[31];
    float precio;
    struct fVencimiento fecha;
};

void ingresarProductos();
struct producto cargaProducto();
struct fVencimiento cargaFechaVencimiento();
void imprimir(struct producto p);


int main(){

    ingresarProductos();
    return 0;
}

//Ejercicio 1
//creamos una variable del tipo struct producto e ingresamos los datos de dos productos(codigo, nombre y precio)
void ingresarProductos(){

    struct producto prdct[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("producto #%i\n", i+1);
        prdct[i] = cargaProducto();
    }

    printf("los productos ingresados son los siguientes: ");
    
    for (i = 0; i < 3; i++)
    {
        imprimir(prdct[i]);
    }
    
}


struct producto cargaProducto()
{
    struct producto pr;

    printf("ingrese el codigo del producto: ");
    scanf("%i", &pr.idProducto);

    printf("ingrese el nombre del producto: ");
    scanf(" %[^\n]", pr.nombre);

    printf("ingrese el precio del producto: ");
    scanf("%f", &pr.precio);

    pr.fecha = cargaFechaVencimiento();

    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    return pr;
};

struct fVencimiento cargaFechaVencimiento(){

    struct fVencimiento f;

    printf("ingrese el dia de vencimiento del producto: ");
    scanf("%i", &f.dd);

    printf("ingrese el mes de vencimiento del producto: ");
    scanf("%i", &f.mm);

    printf("ingrese el año de vencimiento del producto: ");
    scanf("%i", &f.aa);

    return f;
}

//al pasar valores unicamente para imprimir no utilizamos los punteros ya que no sobrescribiremos la variable
//al no pasar con punteros se crea una copia, por ende la variable p es una copia de lo que tenemos en nuestra main
void imprimir(struct producto p){

    printf("\ncodigo: %i", p.idProducto);
    printf("\nnombre: %s", p.nombre);
    printf("\nprecio: %.2f", p.precio);
    printf("\nFecha de vencimiento: %i/%i/%i", p.fecha.dd, p.fecha.mm, p.fecha.aa);
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

}
