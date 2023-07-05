#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char* ciclos[] = {"Primer Ciclo", "Segundo Ciclo", "Tercer Ciclo", "Cuarto Ciclo", "Quinto Ciclo",
                            "Sexto Ciclo", "Séptimo Ciclo", "Octavo Ciclo", "Noveno Ciclo", "Décimo Ciclo"};

    int totalDatos = 78;

    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Generar los datos aleatorios
    for (int i = 0; i < totalDatos; i++) {
        int indice = rand() % 10;  // Generar un índice aleatorio entre 0 y 9
        const char* ciclo = ciclos[indice];
        printf("%s\n", ciclo);
    }

    return 0;
}
