#include<stdio.h>
#include<stdlib.h>

struct producto{
    int codigo;
    char nombre[31];
    float precio;
};

//usamos la estructura nodo para almacenar un valor y un puntero del mismo tipo
struct nodo {
    int info;
    struct nodo *sig;
};

//El nodo raiz sera donde almacenaremos de forma secuencial la lista con los nodos que se vayan agregando
struct nodo *raiz = NULL;

//El nodo final facilitara el acceso al ultimo valor en la lista
struct nodo *final = NULL;

void vectorSize();
void listaProductos();
void newProducto(struct producto* pr);

void stackList();
void insertarStack(int x);
int extraerStack();

void queueList();
void insertarQueue(int x);
int extraerQueue();

void imprimirLista();
void freeListMemory();
int cantidadNodos();

int main(){

    //vectorSize();
    //listaProductos();

    //stackList();
    queueList();

    return 0;
}

//*-*-*-*-*-Malloc and Free-*-*-*-*-*

//lee un valor entero y asigna en un vector el espacio en base al entero leido
void vectorSize(){
    int *ptr;
    int sizeVector, i;

    printf("Cuantos numeros tendra el vector: ");
    scanf("%i", &sizeVector);

    //la funcion malloc reserva un bloque de memoria de un tamaño especificado en bytes y devuelve un pointer a ese espacio
    //para reservar memoria multiplicamos la cantidad de enteros que deseamos por los bytes que necesita los enteros
    ptr = malloc(sizeVector*sizeof(int));

    for (i = 0; i < sizeVector; i++)
    {
        printf("ingrese un numero: ");
        scanf("%i", &ptr[i]);
    }
    
    printf("impresion de los numeros en el vector:\n");
    for (i = 0; i < sizeVector; i++)
    {
        printf("%i- %i\n", (i+1), ptr[i]);
    }
    //la funcion free se usa para liberar al sistema operativo la memoria asignada dinamicamente a travez de la funcion malloc
    //ya que esta no se libera automaticamente y es necesario para reducir el desperdicio de memoria
    free(ptr);
}

//leer y agregar en una lista dinamica la cantidad de productos necesarios
void listaProductos(){
    struct producto *p;
    int productoSize, i;

    //printf("%d", sizeof(p));
    printf("Cuantos productos quiere agregar? ");
    scanf("%i", &productoSize);
    p = malloc(productoSize*sizeof(struct producto));

    for (i = 0; i < productoSize; i++)
    {
        printf("-----Producto #%i-----\n", (i+1));
        newProducto(&p[i]);
    }

    for (i = 0; i < productoSize; i++)
    {
        printf("-----Producto #%i-----\n", (i+1));
        printf("%i:-Codigo: %i\n", (0+1), p[i].codigo);
        printf("%i:-Nombre: %s\n", (0+1), p[i].nombre);
        printf("%i:-Precio: %f\n", (0+1), p[i].precio);
    }
    free(p);
}

void newProducto(struct producto* pr){

    printf("ingresa el codigo del producto: ");
    scanf("%i", &pr->codigo);

    printf("ingresa el nombre del producto: ");
    scanf(" %[^\n]", pr->nombre);

    printf("ingresa el precio del producto: ");
    scanf("%.2f", &pr->precio);
}



//*-*-*-*-*-Linked list-*-*-*-*-*
//las linked list es una secuencia de nodos que se compone con un dato y un pointer
//a diferencia de los arrays que cada elemento es contiguo(cercano, proximo) en el espacio de memoria,
//los linked list almacenan en los pointers la ubicacion del proximo nodo formando una cadena de elementos

//*-*-*-*-*-Stack-*-*-*-*-*
//LIFO(Last in - First Out)

//lee y almacena n cantidad de numeros en una lista de enteros
void stackList(){
    int numCount, i, num, numextraer, bExtraer;
    printf("cuantos numeros quiere insertar?: ");
    scanf("%i", &numCount);

    for (i = 0; i < numCount; i++)
    {
        printf("#%i-inserte un numero: ", (i+1));
        scanf("%i", &num);
        insertarStack(num);
    }
    bExtraer = 0;

    imprimirLista();
    printf("la cantidad de nodos que tiene la lista son: %i\n", cantidadNodos());
    
    do
    {
        printf("cuantos numeros quieres extraer(borrar)?: ");
        scanf("%i", &numextraer);

        if (numextraer <= numCount)
        {
            bExtraer = 1;
        }else{
            printf("el numero excede a la cantidad de numeros en la lista.\n");
        }
    } while (bExtraer == 0);
    
    printf("los numeros extraidos son los siguiente: ");

    for (i = 0; i < numextraer; i++)
    {
        printf("%i- ", extraerStack());
    }
    printf("\n");
    
    imprimirLista();
    printf("la cantidad de nodos que tiene la lista son: %i", cantidadNodos());

    freeListMemory();
}

//inserta en nuestra lista un nuevo nodo de forma secuencial, recorriendo el primer valor ingresado hasta el final de la lista
void insertarStack(int x){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;

    //si la raiz es null remplazamos el null y escribimos el primer nodo
    if (raiz == NULL){
        raiz = nuevo;
        //establecemos sig como null para acalarar que hasta ahi llega nuestra lista al no haber ningun nodo anteriormente agregado
        nuevo->sig = NULL;
    }else{
        //aplazara el nodo raiz a sig y asigna un nuevo nodo raiz
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

//extraemos el primer nodo de nuestra lista, retornando el valor y eliminamos de la lista el primer nodo
int extraerStack(){

    //verificamos que la tenga almenos un valor
    if (raiz != NULL)
    {
        int inf = raiz->info;

        //almacenamos la direccion de memoria del nodo a eliminar
        struct nodo *elim = raiz;
        
        //remplazamos el nodo raiz por el siguiente nodo
        raiz = raiz->sig;
        free(elim);

        return inf;
    }else{
        //retornamos el valor -1 en caso que la lista este vacia
        return -1;
    }
}


//*-*-*-*-*-Queue-*-*-*-*-*
//FIFO(First in - First Out)

void queueList(){

    insertarQueue(5);
    insertarQueue(10);
    insertarQueue(15);
    insertarQueue(20);

    imprimirLista();

    printf("El valor extraido de la cola es: %i\n", extraerQueue());
    
    imprimirLista();

    freeListMemory();
}

//inserta en nuestra lista un nuevo nodo de forma secuencial, recorriendo el ultimo valor ingresado hasta el final de la lista
void insertarQueue(int x){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    nuevo->sig = NULL;

    //si la lista esta vacia asignamos el nuevo valor en raiz y como el final de la lista
    if (raiz == NULL){
        raiz = nuevo;
        final = nuevo;
    }else{
        //insertamos el puntero del ultimo valor en sig.
        final->sig = nuevo;
        //hacemos del nuevo valor ingresado como nuestro ultimo nodo
        final = nuevo;
    }
}

int extraerQueue(){
    //verificamos que la lista tenga almenos un nodo
    if (raiz != NULL)
    {
        int inf = raiz->info;

        //almacenamos la direccion de memoria del nodo a eliminar
        struct nodo *elim = raiz;
        
        //si la ubicacion de memoria de raiz y final son la misma asignamos el valor NULL a ambas
        if (raiz == final)
        {
            raiz = NULL;
            final == NULL;
        }else{
            //remplazamos el nodo raiz por el siguiente nodo
            raiz = raiz->sig;
        }
        
        free(elim);

        return inf;
    }else{
        //retornamos el valor -1 en caso que la lista este vacia
        return -1;
    }
}


//*-*-*-*-*-Funciones para Stack y Queue-*-*-*-*-*

//lee e imprime la lista de todos los elementos almacenados en la lista.
void imprimirLista(){
    struct nodo *imp=raiz;
    printf("Lista completa.\n");
    while (imp != NULL)
    {
        printf("%i - ",imp->info);
        imp=imp->sig;
    }
    printf("\n");
}

//lee y libera los espacio de memorias que ocupan todos los nodos de la lista
void freeListMemory(){
    struct nodo *frlst = raiz;
    struct nodo *borr;
    while (frlst != NULL)
    {
        borr = frlst;
        frlst = frlst->sig;
        free(borr);
    }
}

//recorre la lista y cuenta cuantos nodos tiene
int cantidadNodos(){
    int iCount = 0;
    struct nodo *nodoCount = raiz;

    while (nodoCount != NULL)
    {
        iCount++;
        nodoCount = nodoCount->sig;
    }

    return iCount;
}
