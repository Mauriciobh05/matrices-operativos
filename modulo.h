#ifndef __MODULO_H__ // Se evita que el archivo se incluya mas de una vez 
#define __MODULO_H__ // se define la constante de control 

void InicioMuestra(); // Funcion que marca el inicio de la medicion de tiempo 
void FinMuestra(); // Esta funcion determina el fin de la medicion y calcula en tiempo transcurrido 
void iniMatriz(int n, double *m1, double *m2); // funcion que inicializa dos matrices con valores predefinidos 
void imprMatrices(int n, double *matriz); // funcion que imprime la matriz 

#endif 
