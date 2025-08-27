#include<stdio.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};


void introduccionPointers();
void ejercicio1();
int Suma();
void productos();
int asignarValor(int* asignValor);
int crearProductos(struct producto* p);


int main(){

    //introduccionPointers();
    //ejercicio1();
    //Suma();
    productos();

    return 0;
}

//se ven los conceptos mas basicos de los punteros
void introduccionPointers(){

    //creamos variables de tipo entero
    int valor1 = 10, valor2 = 10;

    //generamos nuestra variable de tipo puntero
    int *dMemoria;

    //asignamos la direccion de memoria de nuestra variable entero valor1, para eso tenemos que colocar el & para poder mandar la direccion de 
    //memoria de la variable, en caso de no ponerlo dara un error al no ser variables del mismo tipo
    dMemoria = &valor1;
    
    //imprimimos el valor que obtuvimos de la direccion de memoria de valor1 y imprimimos la direccion de memoria de la variable valor1
    //nota: para poder imprimir la direccion de memoria debemos poner el formato %p para que se vea de forma Hexadecimal
    printf("la variable valor1 con un numero de %i su direccion en la memoria es: %p\n", *dMemoria, dMemoria);

    dMemoria = &valor2;

    printf("la variable valor2 con un numero de %i su direccion en la memoria es: %p", *dMemoria, dMemoria);
}

//primer ejercicio
//crear dos variables enteras sin inicializarlas y asingar un valor a dichas variables a travez de una funcion
void ejercicio1(){
    //creamos las dos variables sin iniciarlizar
    int valor1, valor2;
    
    //pasamos a nuestra funcion "asignarValor" la direccion de memoria de ambas funciones
    asignarValor(&valor1);
    asignarValor(&valor2);

    //una vez pase por la funcion imprimimos nuestras variables ya con los nuevos valores
    printf("el valor asignado al valor1 es: %i\n", valor1);
    printf("el valor asignado al valor1 es: %i\n", valor2);
}

//Seguno ejercicio
//creamos dos variables enteras sin inicalizar y asignar un valor a travez de una funcion y sumarlos
int Suma(){
    int inum1, inum2;

    asignarValor(&inum1);
    asignarValor(&inum2);

    printf("la suma de los dos valores es %i", (inum1 + inum2));

    return 0;
}

//tercer ejercicio
//a travez del struct productos, enviaremos a una funcion la struct declarada y pediremos que llene con la informacion necesaria
void productos(){
    struct producto prdct[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        crearProductos(&prdct[i]);
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    }

    printf("los productos ingresados son los siguientes:\n");

    for (i = 0; i < 3; i++)
    {
        printf("#%i- codigo: %i\n", (i+1), prdct[i].codigo);
        printf("#%i- nombre: %s\n", (i+1), prdct[i].descripcion);
        printf("#%i- precio: %0.2f\n", (i+1), prdct[i].precio);
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    }
    

}

//esta funcion se utiliza para asignar valor a las variables puntero a entero, pasamos como parametro un puntero con la
//direccion de memoria asignada
int asignarValor(int* asignValor){

    int aux;

    printf("asigne un valor: ");

    scanf("%i", &aux);

    //asignamos el valor ingresado a la variable deseada
    //para eso ponemos el * antes de la variable para decir al programa que queremos pasar un valor entero a la direccion de memoria que se paso
    //de no poner el asterisco estariamos sobrescribiendo la direccion de memoria de la variable y no su valor
    *asignValor = aux;

    return 0;
}

//esta funcion utiliza como parametro la struct product, se pediran los datos para rellenar la struct y pasar los valores a la direccion de memoria asignada.
int crearProductos(struct producto* p){

    printf("ingrese el codigo del producto: ");
    scanf("%i", &p->codigo);

    printf("ingrese el nombre del producto: ");
    scanf(" %[^\n]", p->descripcion);

    printf("ingrese el precio del producto: ");
    scanf("%f", &p->precio);
}