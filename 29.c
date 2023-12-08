#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 6
    int randomNumber = rand() % 6 + 1;

    // Print the generated random number
    printf("Random number: %d\n", randomNumber);

    return 0;
}
