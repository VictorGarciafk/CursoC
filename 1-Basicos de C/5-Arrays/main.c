#include<stdio.h>
#include<string.h>

void sueldo();
void EstaturaPromedio();
void enterosYDecimales();
void cargarDiagonal();
void artVenta();
void cargaYBusqueda();
void nombresYEdades();
void ordenarCalificaciones();

int main(){

    //sueldo();
    //EstaturaPromedio();

    //enterosYDecimales();
    //cargarDiagonal();
    //artVenta();
    //cargaYBusqueda();

    //nombresYEdades();
    ordenarCalificaciones();

    return 0;
}

//*-*-*-*-*-Arrays-*-*-*-*-*

//lee e imprime los sueldos
void sueldo(){
    //los arrays almacena una coleccion de elementos del mismo tipo(int, float, char) en una variable
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
}

//lee 5 estaturas(valores) y calcula cuantos son mas bajos y mas altos que el promedio
void EstaturaPromedio(){
    float estaturas[5];
    float promedio, suma;
    int i, pAltas, pBajas;

    suma = 0;
    pAltas = 0;
    pBajas = 0;

    for (i = 0; i < 5; i++)
    {
        printf("ingresa la estatura: ");
        scanf("%f", &estaturas[i]);
        suma += estaturas[i];
    }

    promedio = suma/5;

    printf("el promedio de las 5 estaturas es: %.2f\n", promedio);

    for ( i = 0; i < 5; i++)
    {
        if (estaturas[i] >= promedio)
        {
            pAltas++;
        }else{
            pBajas++;
        }
    }
    
    printf("%i son mas bajas que el promedio y %i son mas altos que el promedio.", pBajas, pAltas);
}

//*-*-*-*-*-Matriz-*-*-*-*-*

//cargar los numeros enteros en una matriz
void enterosYDecimales(){
    //es un arreglo bidimensional que almacena multiples valores del mismo tipo en forma de filas y columnas
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

//en una matriz cargar los * en diagonal y el resto cargarlo con - e imprimirlo
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

//lee y almacenar en una matriz los articulos de venta
void artVenta(){
    char articulos[3][20];
    char art[20];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("ingrese un articulo: ");
        scanf(" %[^\n]", art);
        strcpy(articulos[i], art);
    }

    printf("los articulos ingresados son los siguientes:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", articulos[i]);
    } 
}

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

//*-*-*-*-*-vectores y matrices paralelas-*-*-*-*-*

//cargaremos en una matriz los nombres y en un vectores las edades, la posicion 0 de 
//la matriz debe coincidir con el valor 0 del vector para que los datos concuerden en edades
void nombresYEdades(){
    char nombres[5][31];
    int edades[5];
    int i, count;
    count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese un nombre: ");
        scanf(" %[^\n]", nombres[i]);

        printf("ingrese la edad: ");
        scanf("%i", &edades[i]);

        if (edades[i] >= 18)
        {
            count++;
        }
        
        printf("---------------------------------------------\n");
    }

    if (count != 0)
    {
        printf("las personas ingresadas que son mayores de edad son las siguiente: ");

        for (i = 0; i < 5; i++)
        {
            if (edades[i] >= 18)
            {
                printf("\nNombre: %s",nombres[i]);
                printf("\nEdad: %i", edades[i]);
            }
        }
    }else{
        printf("Ninguna de los nombres ingresados son mayores de edad");
    }
}

//se cargara una matriz con los nombres de los alumnos y un vector con su respectiva calificaciones en la misma posicion
//se realizara un ordenamiento donde se acomode de mayor a menor las calificaciones de los alumnos
void ordenarCalificaciones(){
    char Alumnos[5][31];
    char auxAlumno[31];
    int calificaciones[5];
    int pos, i, f, auxCalificacion;

    for (i = 0; i < 5; i++)
    {
        printf("ingrese el nombre del alumno: ");
        scanf(" %[^\n]", Alumnos[i]);

        printf("ingrese la calificacion: ");
        scanf("%i", &calificaciones[i]);

        printf("---------------------------------------------\n");
    }

    printf("lista sin ordenar: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n%s", Alumnos[i]);
        printf("\n%i", calificaciones[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        pos = i;
        for (f = i+1; f < 5; f++)
        {
            if (calificaciones[pos] < calificaciones[f])
            {
                pos = f;
            }
        }
        if (calificaciones[pos] != calificaciones[i])
        {
            auxCalificacion = calificaciones[pos];
            strcpy(auxAlumno, Alumnos[pos]);

            calificaciones[pos] = calificaciones[i];
            strcpy(Alumnos[pos], Alumnos[i]);

            calificaciones[i] = auxCalificacion;
            strcpy(Alumnos[i], auxAlumno);
        }
    }

        printf("\n\nlista ordenada: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n%s", Alumnos[i]);
        printf("\n%i", calificaciones[i]);
    }
    
}