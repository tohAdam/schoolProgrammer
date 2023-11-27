#include <stdio.h>

// Function to determine the quadrant based on the angle and display the quadrant diagram
void determineQuadrant(double angle);

int main(void) {
    // User input
    double angle;

    // Read the angle from the user
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Checking the validation of the input angle should be between 0 to 360
    if (angle >= 0 && angle <= 360) {
        // Determine the quadrant and display the quadrant diagram
        determineQuadrant(angle);
    } else {
        printf("Invalid angle. Angle must be between 0 and 360 degrees.\n");
    }

    return 0;
}

// Function to determine the quadrant based on the angle and display the quadrant diagram
void determineQuadrant(double angle) {
    if (angle >= 0 && angle < 90) {
        printf("             |    /       \n");
        printf("     II      |   /  I     \n");
        printf("             |  /         \n");
        printf("             | / \\ %.2lf  \n", angle);
        printf(" -------------------------\n");
        printf("             |            \n");
        printf("      III    |     IV     \n");
        printf("             |            \n");
        printf("             |            \n");
    } else if (angle >= 89 && angle < 180) {
        printf("         \\   |            \n");
        printf("     II   \\  |     I      \n");
        printf("           \\ |            \n");
        printf("      %.2lf \\|            \n", angle);
        printf(" -------------------------\n");
        printf("             |            \n");
        printf("      III    |     IV     \n");
        printf("             |            \n");
        printf("             |            \n");
    } else if (angle >= 179 && angle < 270) {
        printf("             |            \n");
        printf("     II      |      I     \n");
        printf("             |            \n");
        printf("             |            \n");
        printf(" -------------------------\n");
        printf("            /|            \n");
        printf("     III   / |     IV     \n");
        printf("          /  |            \n");
        printf("    %.2lf/   |            \n", angle);
    } else if (angle >= 269 && angle < 360) {
        printf("             |            \n");
        printf("     II      |      I     \n");
        printf("             |            \n");
        printf("             |            \n");
        printf(" -------------------------\n");
        printf("             |\\           \n");
        printf("      III    | \\    IV    \n");
        printf("             |  \\         \n");
        printf("             |   \\  %.2lf \n", angle);
    }
}
