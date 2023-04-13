/**
 *  @brief Proyecto de teorico analisis de algoritmos 1.2 Nocion de Ordenes
 *
 */

// Comenzamos a trabajar ahora

float calcularPromedio (float ventas[], int numDias){
    float suma = 0.0;
    for (int i = 0; i < numDias; i++){
        suma += ventas[i];
    }
    float promedio = suma / numDias;
    return promedio;
}