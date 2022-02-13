#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    indice=-1;
    leerArreglo();
    listar();

    int a=maxGanancia();

    printf("\n%d", a);



    return 0;
}
