#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements in the array
    printf("Element at index 0: %d\n", numbers[0]);  // Output: Element at index 0: 1
    printf("Element at index 2: %d\n", numbers[2]);  // Output: Element at index 2: 3

    // Modifying elements in the array
    numbers[1] = 10;
    
    // Displaying all elements in the array
    printf("All elements in the array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    // Output: All elements in the array: 1 10 3 4 5

    return 0;
}
