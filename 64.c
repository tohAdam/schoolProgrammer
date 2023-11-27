#include <stdio.h>
#include <math.h>

void getInput(int*, int*, int*);
void checkSolution(int, int, int);

int main()
{
    int a, b, c;
    
    // Function to get input values for the quadratic equation
    getInput(&a, &b, &c);
    
    // Function to check and print the solutions of the quadratic equation
    checkSolution(a, b, c);

    // Removed getch() for simplicity

    return 0;
}

void getInput(int* a, int* b, int* c)
{
    // Prompt the user for input values
    printf("\n\n\tQuadratic Equation :: a*x^2 + b*x + c = 0");
    printf("\n\n\tEnter the value of a: ");
    scanf("%d", a);
    printf("\n\n\tEnter the value of b: ");
    scanf("%d", b);
    printf("\n\n\tEnter the value of c: ");
    scanf("%d", c);
}

void checkSolution(int a, int b, int c)
{
    int d;
    float root1, root2;

    // Check if the equation is not quadratic
    if (a == 0 && b == 0)
    {
        printf("\n\n\tNo solution !!");
        return;
    }

    // Check if the equation is linear
    if (a == 0)
    {
        float root = -(c / (float)b);
        printf("\n\n\tOnly 1 solution :: %0.2f", root);
        return;
    }

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    // Check the nature of the roots
    if (d < 0)
    {
        printf("\n\n\tNo real roots exist !!");
        return;
    }

    // Calculate and print the roots
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("\n\n\tThe two roots are :: %0.2f, %0.2f", root1, root2);
}
