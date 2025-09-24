/******************************************************
 * Archivo: modulo.c
 * Nombre: Mauricio Beltrán Huertas
 * Fecha: 24/09/2025
 * Descripción:
 *  Implementación de las funciones auxiliares que se usaron
 *  en la multiplicación de matrices.
 *  Contiene:
 *   - Medición de tiempos de ejecución 
 *   - Inicialización de matrices con valores 
 *     predeterminados (iniMatriz).
 *   - Impresión de matrices en consola (imprMatrices).
 *  
 *   - Se utiliza la librería <sys/time.h> para la 
 *  medición precisa de tiempos en microsegundos.
 ******************************************************/
#include <stdio.h> // libreria que se usa para las entradas y las salidas 
#include <stdlib.h> // libreria para usar malloc, free 
#include <sys/time.h> // libreria para medir los tiempos 
#include "modulo.h" // encabezado con las declaraciones de las funciones 

struct timeval ini, fin; // se crean las variables globales para almacenar tiempos en inicio a fin 

void InicioMuestra(){
    gettimeofday(&ini, NULL); // se guarda el tiempo actual en ini 
}
// se marca el fin de la medicion y se calcula la diferencia 
void FinMuestra(){
    gettimeofday(&fin, NULL); // se guarda el tiempo actual en fin 
    fin.tv_usec -= ini.tv_usec; // esta es la diferencia en microsegundos 
    fin.tv_sec  -= ini.tv_sec; // esta es la diferencia en segundos 
// se calcula el tiempo total en microsegundos 
    double tiempo = (double) (fin.tv_sec*1000000 + fin.tv_usec);
    printf("Tiempo transcurrido: %9.0f microsegundos\n", tiempo);
}
// se inicializa dos matrices con valores predefinidos 
void iniMatriz(int n, double *m1, double *m2){
    for(int i=0; i<n*n; i++){
        m1[i] = i*2.3 + 1.3; // aqui los valores para la matriz A 
        m2[i] = i*2.3;// aqui los valores para la matriz B 
    }
}
// se imprime la atriz en pantalla siempre y cuando sea menor a 9 
void imprMatrices(int n, double *matriz){
    if(n < 9){
        printf("\n#######################################################\n");
        for(int i=0; i<n*n; i++){
            if(i%n == 0) printf("\n"); // se hace el salto de linea al final de cada fila 
            printf(" %f ", matriz[i]); // se imprime cada elmento 
        }
        printf("\n#######################################################\n");
    }
}
