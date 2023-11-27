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

    // Removed getch() for simplicity

    return 0;
}

void getInfo(char *type, int *hEntry, int *mEntry, int *hExit, int *mExit)
{
    printf("\n\n\tPlease enter the following details\n");
    printf("\n\tType of vehicle : ");
    scanf(" %c", type); // Added space before %c to consume the newline character
    printf("\n\tHour vehicle entered the lot (0-24) : ");
    scanf("%d", hEntry);
    printf("\n\tMinute vehicle entered the lot (0-60) :");
    scanf("%d", mEntry);
    printf("\n\tHour vehicle left the lot (0-24) : ");
    scanf("%d", hExit);
    printf("\n\tMinute vehicle left the lot (0-60) : ");
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
    printf("\n\n\t\t***********************************");
    printf("\n\t\t* PARKING LOT CHARGES *");
    printf("\n\t\t***********************************");
    printf("\n\n\n\t\t* Type of vehicle \t %c", type);
    printf("\n\n\n\t\t* Time in \t %d : %d", hEntry, mEntry);
    printf("\n\n\n\t\t* Time out \t %d : %d", hExit, mExit);
    printf("\n\t\t ------------");
    printf("\n\n\n\t\t* Parking time \t %d : %d", netHours, netMin);
    printf("\n\n\n\t\t* Round off hours \t %d", time);
    printf("\n\t\t ------------");
    printf("\n\n\n\t\t* Total charges generated \t $%.2f", fare);
}
