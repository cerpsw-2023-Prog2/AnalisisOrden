/**
 *  @brief Proyecto de teorico analisis de algoritmos 1.2 Nocion de Ordenes
 *
 */
// Comenzamos a trabajar

#include<stdio.h>

int main (){
    printf("Hola mundo");
    return 0; 
}

int suma(int a, int b){
    return a+b;
}

int buscarVentaExponencial(float ventas[], int numDias, float venta){
    for(int i=0; i++; i<numDias){
        if(ventas[i]==venta) return 1;
    } 
    return 0;
}

