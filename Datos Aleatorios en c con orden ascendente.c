#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortDates(char** dates, int totalDates) {
    for (int i = 0; i < totalDates - 1; i++) {
        for (int j = 0; j < totalDates - i - 1; j++) {
            if (strcmp(dates[j], dates[j + 1]) > 0) {
                char* temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
        }
    }
}

char* formatDate(struct tm* timeInfo) {
    char* buffer = malloc(20 * sizeof(char));
    strftime(buffer, 20, "%-d/%m/%Y %H:%M:%S", timeInfo);
    return buffer;
}

int main() {
    int totalDates = 78;
    char** dates = malloc(totalDates * sizeof(char*));

    // Generar fechas aleatorias desde el 5 de julio de 2023
    time_t startTime = mktime(&(struct tm){0, 49, 2, 5, 6, 2023 - 1900});
    for (int i = 0; i < totalDates; i++) {
        time_t randomTime = startTime + rand() % (60 * 60 * 18);
        struct tm* timeInfo = localtime(&randomTime);
        dates[i] = formatDate(timeInfo);
    }

    // Ordenar las fechas generadas
    sortDates(dates, totalDates);

    // Imprimir las fechas ordenadas
    for (int i = 0; i < totalDates; i++) {
        printf("%s\n", dates[i]);
    }

    // Liberar la memoria asignada
    for (int i = 0; i < totalDates; i++) {
        free(dates[i]);
    }
    free(dates);

    return 0;
}
