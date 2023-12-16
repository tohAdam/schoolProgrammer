#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 45; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers between 15 and 45 = %d\n", sum);

    return 0;
}
