#include <stdio.h>

int main(){

    int num = 10;
    int *puntero = &num; //apunta a un entero

    printf("Contenido del puntero (Valor al que apunta): %d\n", *puntero);
    printf("Dirección de memoria a la que apunta el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", *puntero);
    
    printf("Tamanio de la variable (en bytes): %zu\n", sizeof(num));

    
    printf("Tamanio del puntero (en bytes): %zu\n", sizeof(puntero));

 
    printf("Tamanio de un puntero a entero (int*): %zu\n", sizeof(int*));
    printf("Hola mundo");


    return 0;


}