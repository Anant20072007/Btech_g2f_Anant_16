#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= n; i++) {
            sum += 1.0 / i;
        }

        printf("The sum of the series up to %d terms is: %.4lf\n", n, sum);
    }

    return 0;
}
