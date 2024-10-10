#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int int_1, int_2;
    float float_1, float_2;

    // Input two integers
    scanf("%d %d", &int_1, &int_2);

    // Input two floating point numbers
    scanf("%f %f", &float_1, &float_2);

    // Integer sum and difference
    int int_sum = int_1 + int_2;
    int int_diff = int_1 - int_2;

    // Float sum and difference
    float float_sum = float_1 + float_2;
    float float_diff = float_1 - float_2;

    // Print the results for integers
    printf("%d %d\n", int_sum, int_diff);

    // Print the results for floats with 1 decimal place
    printf("%.1f %.1f\n", float_sum, float_diff);

    return 0;
}
