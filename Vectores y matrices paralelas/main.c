#include<stdio.h>
#include<string.h>

void nombresYEdades();
void ordenarCalificaciones();

int main(){
    
    //nombresYEdades();
    ordenarCalificaciones();
    return 0;
}

//primer ejercicio
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

//Segundo Ejercicio
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