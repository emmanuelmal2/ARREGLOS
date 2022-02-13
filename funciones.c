#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void leerArreglo(){
    FILE * flujo = fopen("datos.txt", "r");
    if (flujo == NULL) {
        printf("Error en la apertura del archivo");
    }else{

        while (feof(flujo) == 0){
            indice++;
            fscanf(flujo, "%d", &arreglo[indice]);
        }

        fclose(flujo);
        printf("Se ha leido correctamente el archivo...");
    }
}

void listar(){
    for(int a=0; a<=indice; a++){
            printf("\n%d", arreglo[a]);
    }
}

int mayor(int a){
    int max=arreglo[a];
    int imax;
    for(int i=a; i<=indice; i++){
        if(max<=arreglo[i]){
            max=arreglo[i];
            imax=i;
        }

    }
    return imax;
}

int menor(int a){
    int min=arreglo[a];
    int imin;
    for(int i=a; i>=0; i--){
        if(min>=arreglo[i]){
            min=arreglo[i];
            imin=i;
        }
    }
    return imin;
}

int maxGanancia(){
    int a=mayor(0);
    int b=menor(indice);
    int c=mayor(b);
    int d=menor(a);

    int derecha, izquierda;
    derecha = arreglo[c]-arreglo[b];
    izquierda = arreglo[a]-arreglo[d];
    if(derecha>izquierda)
        return derecha;

    return izquierda;

}
