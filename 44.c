#include<stdio.h>

//Constants
#define LABOR_RATE 0.35
#define TAX_RATE 0.085

//function declarations
int area(int firstnum, int secondnum);
double getCarpetValue(int area, double cost);
double laborChargeValue(double area);
double priceValue(double carpetCost, double laborCost);
double getDiscountValue(double priceTotal, double discountRate);
double subTotalValue(double priceTotal, double totalDiscount);
double taxTotalValue(double subtotal);
double totalValue(double tax, double subtotal);

int main()
{
    int length, width, discount, compute;
    double carpetValue, carpetCost, laborCost, totalPrice, totalDiscount, discountValue, subtotal, tax, total;

    //input
    printf("Enter the length of the room: ");
    scanf("%d", &length);

    printf("Enter the width of the room: ");
    scanf("%d", &width);

    printf("Enter the Discount for costumer:");
    scanf("%d", &discount);

    printf("Enter the cost per square foot:");
    scanf("%lf", &carpetValue);


    //process
    compute = area(length, width);
    carpetCost = getCarpetValue(compute, carpetCost);
    laborCost = laborChargeValue(compute);
    totalPrice = priceValue(carpetCost, laborCost);
    discountValue = ((double) discount) / 100.0; // we need to convert this integer to decimal
    totalDiscount = getDiscountValue(totalPrice, discountValue);
    subtotal = subTotalValue(totalPrice, totalDiscount);
    tax = taxTotalValue(subtotal);
    total = totalValue(tax, subtotal);

    //displaying output
    printf("\n\n\t\t\tMEASUREMENT\n\n");
    printf("Length\t\t\t\t\t%d ft\n", length);
    printf("Width\t\t\t\t\t%d ft\n", width);
    printf("Area\t\t\t\t\t%d square ft\n", compute);
    printf("\n\t\t\tCHARGES\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", carpetValue, carpetCost);
    printf("Labor\t\t\t%.2lf\t\t%.2lf\n", LABOR_RATE, laborCost);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", totalPrice);
    printf("Discount\t\t $%d\t\t%.2lf\n", discount , totalDiscount);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2lf\n", total);

    return 0;
}

    int area(int firstnum, int secondnum)
    {
        return firstnum * secondnum;
    }

    double getCarpetValue(int area, double cost)
    {
        return area * cost;
    }

    double laborChargeValue(double area)
    {
        return area * LABOR_RATE;
    }

    double priceValue(double carpetCost, double laborCost)
    {
        return carpetCost + laborCost;
    }

    double getDiscountValue(double priceTotal, double discountRate)
    {
        return priceTotal * discountRate;
    }
    double subTotalValue(double priceTotal, double totalDiscount)
    {
        return priceTotal - totalDiscount;
    }


    double taxTotalValue(double subtotal)
    {
        return subtotal * TAX_RATE;
    }

    double totalValue(double tax, double subtotal)
    {
        return subtotal + tax;
    }