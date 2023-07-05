#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char* efectividad[] = {"Muy efectivo", "Algo efectivo", "Neutral", "Poco efectivo", "Nada efectivo"};

    int totalDatos = 78;

    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Generar los datos aleatorios
    for (int i = 0; i < totalDatos; i++) {
        int indice = rand() % 5;  // Generar un índice aleatorio entre 0 y 4
        const char* valorEfectividad = efectividad[indice];
        printf("%s\n", valorEfectividad);
    }

    return 0;
}