#include <stdio.h>

int main() {
    int positive_integer;
    printf("Enter a positive integer: ");
    scanf("%d", &positive_integer);

    if (positive_integer < 0) {
        printf("Factorials for negative numbers do not exist.\n");
        return 1;  // Exit the program with an error code.
    }

    long long int factorial = 1;  // Use long long to avoid overflow
    for (int i = 2; i <= positive_integer; i++) {  // Start loop from 2 to n
        factorial *= i;
    }

    printf("Factorial of %d: %lld\n", positive_integer, factorial);
    return 0;
}
