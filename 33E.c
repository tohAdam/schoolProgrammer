#include <stdio.h>

int main() {
    int count = 50;  // Number of terms in the series
    int series[count];
    int total = 0;

    // Generate the series
    for (int i = 0, term = 1; i < count; ++i, term += 3) {
        series[i] = term;
    }

    // Calculate the total
    for (int i = 0; i < count; ++i) {
        total += series[i];
    }

    // Display the series
    printf("Series: ");
    for (int i = 0; i < count; ++i) {
        printf("%d ", series[i]);
    }

    // Display the total
    printf("\nTotal: %d\n", total);

    return 0;
}
