#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Auslagern der Berechnungen als Funktion, um Out-Argumente verwenden zu können
void statistics(float values[], int array_length, float* mean, float* variance) {
    // Berechnung des Mittelwerts
    float sum_mean = 0.0;

    for (int i = 0; i < array_length; i++) {
        sum_mean += values[i];
    }
    *mean = sum_mean / (float)array_length;

    // Berechnung der Varianz
    float sum_var = 0.0;

    for (int i = 0; i < array_length; i++) {
        sum_var = sum_var + pow((values[i] - *mean), 2);
    }
    *variance = sum_var / (float)array_length;
}

int main() {
    int array_length;

    while (1) {
        printf("Please insert length of array: ");
        fflush(stdout);
        scanf("%d", &array_length);
        if (array_length > 0) {
            break;
        } else {
            printf("Please enter a positive integer!\n");
        }
    }

    // Erstellen und befüllen des Arrays
    float array[array_length];

    for (int i = 0; i < array_length; i++) {
            printf("Enter the %d. number: ", i + 1);
            fflush(stdout);
            scanf("%f", &array[i]);
    }

    float mean, variance;
    statistics(array, array_length, &mean, &variance);

    printf("Average is: %.1f, Variance is: %.1f\n", mean, variance);

    return EXIT_SUCCESS;
}
