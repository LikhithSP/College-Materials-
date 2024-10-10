#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    // Declare variable to hold the input number
    int n;

    // Input the number
    scanf("%d", &n);

    // Check if the number is between 1 and 9
    if (n >= 1 && n <= 9) {
        // Print the corresponding word for the number
        switch (n) {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
        }
    } else {
        // Print "Greater than 9" for numbers greater than 9
        printf("Greater than 9\n");
    }

    return 0;
}
