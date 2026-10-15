#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative integers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // Multiplies fact by i in each iteration
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

   // return 0;
}
