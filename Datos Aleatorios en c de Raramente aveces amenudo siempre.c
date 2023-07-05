#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char* frecuencias[] = {"Raramente", "A veces", "A menudo", "Siempre"};

    int totalDatos = 78;

    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Generar los datos aleatorios
    for (int i = 0; i < totalDatos; i++) {
        int indice = rand() % 4;  // Generar un índice aleatorio entre 0 y 3
        const char* frecuencia = frecuencias[indice];
        printf("%s\n", frecuencia);
    }

    return 0;
}
