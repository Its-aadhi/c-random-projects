#include <stdio.h>
#include "calculator.h"

int main(void)
{
    printf("Select the Operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    int choice;
    scanf("%d", &choice);
    int a, b;
    char op; 
    switch (choice) {
        case 1: op = '+'; break;
        case 2: op = '-'; break;
        case 3: op = '*'; break;
        case 4: op = '/'; break;
        default: printf("Invalid choice\n"); return 1;
    }
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The output is: %d\n", caculate(a, b, op));
    return 0;
}