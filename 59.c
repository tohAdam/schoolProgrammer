#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 20
    int randomNumber = rand() % 20 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the guessing game! Guess the number between 1 and 20.\n");

    while (attempts < 5) {
        // Prompt user for a guess
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == randomNumber) {
            printf("Congratulations! You guessed the correct number %d!\n", randomNumber);
            break;
        } else {
            // Provide feedback on the guess
            if (guess < randomNumber) {
                printf("Too low. ");
            } else {
                printf("Too high. ");
            }

            // Increment the number of attempts
            attempts++;

            // Inform the user about the remaining attempts
            printf("Attempts left: %d\n", 5 - attempts);
        }
    }

    // If the user hasn't guessed the number after five attempts
    if (attempts == 5) {
        printf("Sorry, you've run out of attempts. The correct number was %d.\n", randomNumber);
    }

    return 0;
}
