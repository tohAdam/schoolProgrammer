#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber() {
    // Generate a random index (0 to 5) to select from the set
    int index = rand() % 6;
    
    // Map the index to the specified set {1, 4, 7, 10, 13, 16}
    int numberSet[] = {1, 4, 7, 10, 13, 16};
    return numberSet[index];
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number from the specified set
    int randomNumber = getRandomNumber();

    // Print the generated random number
    printf("Random number: %d\n", randomNumber);

    return 0;
}
