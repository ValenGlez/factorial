#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;
int main () {

int factorial;
int f = 1;
int contador = 1;

printf ("Ingrese un numero:\n");
scanf (" %d", &factorial);

while (contador <= factorial){
    f = f*contador;
    contador = contador + 1;
}

factorial = f;

printf ("El resultado del numero factorial es %d", factorial);



return 0;
}
