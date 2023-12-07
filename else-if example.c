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

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';  // Corrected to uppercase 'C'
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}
