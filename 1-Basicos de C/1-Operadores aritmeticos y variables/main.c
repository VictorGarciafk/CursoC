#include<stdio.h>

//pasamos nuestra funcion arriba para que el programa lea que existe la funcion antes de entrar al main
void suma();
void areaCuadradado();
void perimetroCuadrado();
void promedio();
void calcularSueldo();
void compraArticulo();

//nuestra funcion principal donde se ejecutara todo el programa
int main(){

    //suma();
    //areaCuadradado();
    //perimetroCuadrado();
    //promedio();
    //calcularSueldo();
    compraArticulo();

    return 0;
}

//calcular la suma de dos numeros enteros
void suma(){
    //declaramos la variable tipo int para almacenar valores enteros(sin decimales)
    int num1, num2, suma;

    //la funcion printf imprime en la consola al usuario el texto dentro de las comillas
    printf("ingrese el primer numero: ");
    //la funcion scanf lee la entrada de datos y escribe la entrada en la ubicacion asignada (&variable)
    //al asignar el formato "%i" le decimos a la funcion que espera leer una entrada con valores enteros
    //despues se asigna la direccion de memoria de la variable num1 para almacenar la entrada, para dar
    //la direccion de memoria se requiere usar el & antes del nombre de la variable
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    //usamos el operador + para realizar la suma de las dos variables
    //en caso de querer hacer la resta se utilizaria el operador -
    suma = num1 + num2;

    //imprimimos el area del cuadrado
    printf("la suma de los primeros dos numeros es: %i", suma);
}

//preguntamos al usuario que nos de el valor de un lado del cuadrado y hacemos la operacion para obtener el area de dicho cuadrado
void areaCuadradado(){
    //declaramos las variables tipo float, que nos permite almacenar valores con decimales
    float lado;
    float area;
    
    printf("ingrese el valor de un lado del cuadrado: ");
    //usamos el formato "%f" para que la funcion espere leer una entrada con numeros decimales
    scanf("%f", &lado);

    //usamos el operador * para expesar una multiplicacion de la variable lado por lado
    area = lado * lado;

    printf("el area del cuadrado es: ");
    //el .2 en el formato significa que solo queremos que nos imprima el area con dos decimales.
    printf("%.2f", area);
}

//calcular el perimetro de un cuadrado
void perimetroCuadrado(){
    float lado, perimetro;

    printf("ingresar el valor del lado del cuadrado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;

    printf("el perimetro del cuadrado es %.2f: ", perimetro);
}

//calcular el promedio de la suma de 4 numeros
void promedio(){
    int num1, num2, num3, num4, suma;
    float promedio;

    printf("ingrese el primer valor: ");
    scanf("%i", &num1);

    printf("ingrese el segundo valor: ");
    scanf("%i", &num2);

    printf("ingrese el tercer valor: ");
    scanf("%i", &num3);

    printf("ingrese el cuarto valor: ");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    //usamos el operador / para realizar una division
    //usamos el (float) para convertir a tipo float y pueda dar los numeros decimales.
    promedio = (float)suma / 4;

    printf("el promedio de los valores es: %.2f", promedio);
}

//calculamos el sueldo en base a las horas trabajadas y el costo por hora
void calcularSueldo(){
    
    int horasTrabajadas;
    float costoHoras;
    float sueldo;

    printf("Ingrese las horas trabajadas al mes: ");
    scanf("%i", &horasTrabajadas);

    printf("Ingrese el sueldo por hora: ");
    scanf("%f", &costoHoras);

    sueldo = horasTrabajadas*costoHoras;

    printf("el sueldo mensual es: $%.2f", sueldo);
}

//calculamos el total de la compra ingresando el precio del articulo y la cantidad
void compraArticulo(){
    int cantidad;
    float precio, total;

    printf("ingresa el precio del articulo: ");
    scanf("%f", &precio);

    printf("ingresa la cantidad de articulos: ");
    scanf("%i", &cantidad);

    total = cantidad * precio;

    printf("el total es: %.2f", total);
}