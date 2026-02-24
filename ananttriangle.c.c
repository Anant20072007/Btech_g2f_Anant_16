/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check Triangle Validity (Triangle Inequality Theorem)
    if (a + b > c && a + c > b && b + c > a) {

        printf("The given sides form a valid triangle.\n");

        // Check Type of Triangle
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.");
        }
        else {
            printf("It is a Scalene Triangle.");
        }

    } else {
        printf("The given sides do NOT form a valid triangle.");
    }

    return 0;
}