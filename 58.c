#include <stdio.h>
#include <math.h>

// Function prototype declaration
void getInfo(char *, int *, int *, int *, int *);
int calcTime(char, int, int, int, int);
float chargeFare(char, int);
void print(char, int, int, int, int, float, int);

int netMin, netHours;

int main()
{
    char type;
    float fare;
    int entryHr, entryMin, exitHr, exitMin, time;

    // Function to get information from the user
    getInfo(&type, &entryHr, &entryMin, &exitHr, &exitMin);

    // Function to calculate parking time
    time = calcTime(type, entryHr, entryMin, exitHr, exitMin);

    // Function to calculate parking fare
    fare = chargeFare(type, time);

    // Function to print the details
    print(type, entryHr, entryMin, exitHr, exitMin, fare, time);

    return 0;
}

void getInfo(char *type, int *hEntry, int *mEntry, int *hExit, int *mExit)
{
    printf("\n\n\tC(Car) T(Truck) B(Bus)\n");
    printf("\n\tType of vehicle: ");
    scanf(" %c", type); // Added space before %c to consume the newline character
    printf("\n\tHour vehicle entered the lot (0-24): ");
    scanf("%d", hEntry);
    printf("\n\tMinute vehicle entered the lot (0-60): ");
    scanf("%d", mEntry);
    printf("\n\tHour vehicle left the lot (0-24): ");
    scanf("%d", hExit);
    printf("\n\tMinute vehicle left the lot (0-60): ");
    scanf("%d", mExit);
}

int calcTime(char type, int hEntry, int mEntry, int hExit, int mExit)
{
    int hour;

    if (mEntry > mExit)
    {
        mExit += 60;
        hExit--;
    }

    netMin = mExit - mEntry;
    netHours = hExit - hEntry;
    hour = netHours;

    if (netMin > 0)
    {
        hour++;
    }

    return hour;
}

float chargeFare(char type, int hours)
{
    float fare = 0.0;

    switch (type)
    {
    case 'C':
    case 'c':
        if (hours > 3)
        {
            hours = hours - 3;
            fare = 1.50 * hours;
        }
        break;

    case 'T':
    case 't':
        if (hours > 2)
        {
            fare = 2.00;
            hours = hours - 2;
            fare = fare + 2.30 * hours;
        }
        else
        {
            fare = 1.00 * hours;
        }
        break;

    case 'B':
    case 'b':
        if (hours > 1)
        {
            fare = 3.70 * (hours - 1);
        }
        fare += 2.00; // Base charge for the first hour
        break;
    }

    return fare;
}

void print(char type, int hEntry, int mEntry, int hExit, int mExit, float fare, int time)
{
    // Print details here using printf statements
    printf("Vehicle Type: %c\n", type);
    printf("TIME - IN\t\t%02d:%02d\n", hEntry, mEntry);
    printf("TIME - OUT\t\t%02d:%02d\n", hExit, mExit);
    printf("\t\t\t______\n");
    
    printf("PARKING TIME\t\t%d: %d", netHours, netMin);
    printf("\nROUNDED TOTAL \t\t%d\n", time);
    printf("\t\t\t______\n");
    printf("TOTAL CHARGE\t\t$%.2f\n", fare);
}
