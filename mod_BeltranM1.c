/******************************************************
 * Programa: Multiplicación de matrices dinámica
 * Nombre: Mauricio Beltrán Huertas
 * Fecha: 24/09/2025
 * Descripción: 
 *  Este programa realiza la multiplicación de dos 
 *  matrices cuadradas de tamaño N, ingresado por el 
 *  usuario. 
 *  -Reserva memoria dinámica para tres matrices (A, B, C).
 *  -Inicializa A y B con valores y C en cero.
 *  - Multiplica A y B para obtener C.
 *  - Imprime las matrices y mide el tiempo de ejecución.
 ******************************************************/
#include <stdio.h> // libreria para las entradas y las salidas 
#include <stdlib.h> //  libreria para usar malloc, free
#include "modulo.h" // encabezado propio con funciones auxiliares 

double *mA, *mB, *mC; //se crearon los punteros globales para las matrices dinamicas 

int main(int argc, char *argv[]) { 
    if(argc <= 1){ // se verifica que el usuario ingrese al menos 1 argumento 
        printf("Numero de argumentos incorrectos\n");
        printf("\n\t Uso: %s DIM\n", argv[0]); // se indica como se ejecuta el programa 
        return -1; // se sale con error 
    }

    int N = atoi(argv[1]); // se convierte ek argumento a entero 
    if(N <= 0){
        printf("El tamaño debe ser mayor que cero\n");
        return -1;// se sale si el tamanio no es correcto 
    }

    mA = (double*) malloc(N*N*sizeof(double));// se reserva memoria dinamica para las 3 matrices 
    mB = (double*) malloc(N*N*sizeof(double));
    mC = (double*) calloc(N*N,sizeof(double)); // el calloc se inizia en 0 

    iniMatriz(N, mA, mB); // se inicializa las matrices A y B , se imprime los valores 
    imprMatrices(N, mA);
    imprMatrices(N, mB);

    InicioMuestra(); // se inicia la medicion del tiempo 
// se multiplica las matrices 
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            double sumaTemp = 0.0, *pA, *pB;
            pA = mA + i*N; // se apunta a la fila i de A 
            pB = mB + j; // se apunta a la columna j de B 
            for(int k=0; k<N; k++, pA++, pB+=N){
                sumaTemp += *pA * *pB;
            }
            mC[j+i*N] = sumaTemp; // se guarda el resultado en C 
        }
    }

    FinMuestra(); // se acaba la medicion del tiempo 
// Se imprime la matriz resultado de C 
    imprMatrices(N, mC);
// se libera la memoria asignada dinamicamente 
    free(mA);
    free(mB);
    free(mC);

    return 0; // se finaliza el programa 
}

