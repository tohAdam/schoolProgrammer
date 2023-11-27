#include <stdio.h>
#include <math.h>

// Function prototypes
void getInput(double*, double*, double*);
void checkSolution(double, double, double);

int main()
{
    double a, b, c;

    // Function to get input values for the quadratic equation
    getInput(&a, &b, &c);

    // Function to check and print the solutions of the quadratic equation
    checkSolution(a, b, c);

    return 0;
}

void getInput(double* a, double* b, double* c)
{
    // Prompt the user for input values
    printf("\n\n\tQuadratic Equation :: a*x^2 + b*x + c = 0");
    printf("\n\n\tEnter the value of a: ");
    scanf("%lf", a);
    printf("\n\n\tEnter the value of b: ");
    scanf("%lf", b);
    printf("\n\n\tEnter the value of c: ");
    scanf("%lf", c);
}

void checkSolution(double a, double b, double c)
{
    double d;
    double root1, root2;

    // Check if the equation is not quadratic
    if (a == 0 && b == 0)
    {
        printf("\n\n\tNo solution !!");
        return;
    }

    // Check if the equation is linear
    if (a == 0)
    {
        if (b != 0)
        {
            double root = -c / b;
            printf("\n\n\tOnly 1 solution :: %0.2lf", root);
        }
        else
        {
            printf("\n\n\tInvalid input: Division by zero.");
        }
        return;
    }

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    // Check the nature of the roots
    if (d < 0)
    {
        // Calculate real and imaginary parts for complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(fabs(d)) / (2 * a);

        // Print complex roots
        printf("\n\n\tComplex roots are :: %0.2lf + %0.2lfi and %0.2lf - %0.2lfi", realPart, imagPart, realPart, imagPart);
    }
    else
    {
        // Calculate and print the real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("\n\n\tThe two real roots are :: %0.2lf, %0.2lf", root1, root2);
    }
}
