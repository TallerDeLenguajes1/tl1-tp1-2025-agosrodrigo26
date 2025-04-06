#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cuadradoNumero(int num){

    int cuadrado;

    cuadrado = num*num;

    return cuadrado;
}

void cuadrado(int num){

    int cuadradito;

    cuadradito = num*num;

    printf("Cuadrado del numero con funcion void: %d\n", cuadradito);
}

void mostrarContenido(int num){

    printf("Contenido de la variable: %d\n", num);
    printf("Direccion de memoria de la variable: %p\n", &num);

}

void invertirNumeros(int a, int b){

    int auxiliar;

    printf("Numeros a: %d\n", a);
    printf("Numero b: %d\n", b);

    auxiliar = b;
    b = a;
    a = auxiliar;

    printf("Numero a: %d\n", a);
    printf("Numero b: %d\n", b);

    
}

void orden(int a, int b){
    int mayor;
    int menor;

    if(a>b){
        mayor = a;
        menor = b;
    }else {
        mayor = b;
        menor = a;
    }

    printf("Orden: %d, %d\n", menor, mayor);
}

int main(){

   
int num1;
int num2;
int cuadr;

printf("Ingrese el primer valor: ");

scanf("%d", &num1);
printf("Ingrese el segundo valor:");
fflush(stdin);
scanf("%d", &num2);



cuadr = cuadradoNumero(num1);

printf("Cuadrado del numero: %d\n", cuadr);
cuadrado(num1);

mostrarContenido(num1);
invertirNumeros(num1, num2);
orden(num1, num2);

return 0;

}