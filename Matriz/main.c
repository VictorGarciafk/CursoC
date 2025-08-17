#include<stdio.h>
#include<string.h>

void enterosYDecimales();
void cargarDiagonal();
void artVenta();
void cargaYBusqueda();

int main(){
    
    //enterosYDecimales();
    //cargarDiagonal();
    //artVenta();
    cargaYBusqueda();
    
    return 0;
}

//primer ejercicio
//cargar los numeros enteros en una matriz
void enterosYDecimales(){
    int matrizEnteros[3][5];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("ingrese un valor: ");
            scanf("%i", &matrizEnteros[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%i ", matrizEnteros[i][j]);
        }
        printf("\n");
    }
    
}

//Segundo ejercicio
//en una matriz cargar los * en diagonal y el resto cargarlo con -
void cargarDiagonal(){
    char matrizCaracteres[5][5];
    int i, j;

    //llenamos la matriz de la base que son los -
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            strcpy(&matrizCaracteres[i][j],"-");
        }
    }

    //sobrescribimos los espacios [0][0],[1][1],.... para darle el formato de diagonal
    for (i = 0; i < 5; i++)
    {
        strcpy(&matrizCaracteres[i][i],"*");
    }
    
    //imprimimos toda la matriz
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c ", matrizCaracteres[i][j]);
        }
        printf("\n");
    }
    
}

void artVenta(){
    char articulos[3][20];
    char art[20];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("ingrese un articulo: ");
        scanf(" %s", art);
        strcpy(articulos[i], art);
    }

    printf("los articulos ingresados son los siguientes:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", articulos[i]);
    }
    
    
}

//tercer ejercicio
//cargar el nombre de 5 personas y despues ingresar un nombre para que lo busque dentro de la matriz
void cargaYBusqueda(){
    char nombres[5][31];
    char compNombre[31];
    int pos = -1;

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese un nombre: ");
        scanf(" %[^\n]", nombres[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", nombres[i]);
    }

    printf("ingrese el nombre que quiere buscar en la lista(Favor de respetar las mayusculas): ");
    scanf(" %[^\n]", compNombre);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(nombres[i],compNombre) == 0)
        {
            pos = i;
        }
    }

    if (pos != -1)
    {
        printf("el nombre se encuentra en la posicion %i de la lista", pos);
    }else{
        printf("el nombre ingresado no se encuentra en la lista");
    }


}
