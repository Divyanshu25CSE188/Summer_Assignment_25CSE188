// Write a program to Find factorial of a number.

#include <stdio.h>

int main() {
    int number, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}