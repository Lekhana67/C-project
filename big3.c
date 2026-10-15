#include <stdio.h>
void biggest3() {
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check conditions to find the biggest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The biggest number is: %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("The biggest number is: %d\n", num2);
    } 
    else {
        printf("The biggest number is: %d\n", num3);
    }

   // return 0;
}
