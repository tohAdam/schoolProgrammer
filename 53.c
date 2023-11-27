#include <stdio.h>

// Function to calculate average score
double average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Function to determine grade
char determineGrade(double averageScore) {
    if (averageScore >= 90)
        return 'A';
    else if (averageScore >= 70)
        return 'B';
    else if (averageScore >= 50)
        return 'C';
    else
        return 'D';
}

// Function to read scores and print result
void calculateAndPrintGrade() {
    int testScore1, testScore2, testScore3;

    printf("Enter test score 1: ");
    scanf("%d", &testScore1);

    printf("Enter test score 2: ");
    scanf("%d", &testScore2);

    printf("Enter test score 3: ");
    scanf("%d", &testScore3);

    double avgScore = average(testScore1, testScore2, testScore3);
    char grade = determineGrade(avgScore);

    printf("Grade: %c\n", grade);
}

int main() {
    calculateAndPrintGrade();
    return 0;
}
