#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 15; i++) {
        sum += i;
    }

    printf("Sum of numbers between 1 and 15 = %d\n", sum);

    return 0;
}
