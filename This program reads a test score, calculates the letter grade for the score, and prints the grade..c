#include <stdio.h>

// Function prototype
char scoreToGrade(int score);

int main(void) {
    int score;
    char grade;

    // Get user input for the score
    printf("Enter the test score (0-100): ");
    scanf("%d", &score);

    // Call the function to convert score to grade
    grade = scoreToGrade(score);

    // Print the result
    printf("The grade is: %c\n", grade);

    return 0;
}

// Function definition
char scoreToGrade(int score) {
    char grade;
    int temp;

    temp = score / 10;

    switch (temp) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    return grade;
}
