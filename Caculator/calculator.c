#include <stdio.h>

int caculate(int a, int b, char op)
{
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0) return a / b;
            else {
                printf("Error: Division by zero\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }
}