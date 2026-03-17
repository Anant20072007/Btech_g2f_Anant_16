#include <stdio.h>

int main() {
    int n, i;
    // Use unsigned long long to handle larger factorial values
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        // Calculate the factorial using a for loop
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
