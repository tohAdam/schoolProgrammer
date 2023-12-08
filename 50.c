#include <stdio.h>

// Function to calculate parking charge based on vehicle type and hours
double parkingCharge(char vehicleType, int hours) {
    double rate;

    // Determine the rate based on the vehicle type
    switch (vehicleType) {
        case 'c':
            rate = 2.0;
            break;
        case 'b':
            rate = 3.0;
            break;
        case 't':
            rate = 4.0;
            break;
        default:
            printf("Invalid vehicle type\n");
            return -1.0;  // Return -1 to indicate an error
    }

    // Calculate and return the parking charge
    return rate * hours;
}

int main() {
    char vehicleType;
    int hours;

    // Get user input for vehicle type
    printf("Enter vehicle type (c for car, b for bus, t for truck): ");
    scanf(" %c", &vehicleType);

    // Get user input for hours
    printf("Enter hours spent in the parking lot: ");
    scanf("%d", &hours);

    // Calculate and print the parking charge
    double charge = parkingCharge(vehicleType, hours);

    if (charge >= 0) {
        printf("Parking charge for vehicle type %c (%d hours): $%.2lf\n", vehicleType, hours, charge);
    }

    return 0;
}
