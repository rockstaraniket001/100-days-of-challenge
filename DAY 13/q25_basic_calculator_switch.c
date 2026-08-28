/*
 * Day 13 - Q25: Write a program to implement a basic calculator using switch-case
 * for +, -, *, /, %.
 */
#include <stdio.h>

int main(void) {
    char op;
    long long a, b;

    printf("Enter operator (+, -, *, /, %%): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid operator input.\n");
        return 1;
    }

    printf("Enter two integer operands: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        printf("Invalid operand input.\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%lld + %lld = %lld\n", a, b, a + b);
            break;
        case '-':
            printf("%lld - %lld = %lld\n", a, b, a - b);
            break;
        case '*':
            printf("%lld * %lld = %lld\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%lld / %lld = %.4lf\n", a, b, (double)a / b);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%lld %% %lld = %lld\n", a, b, a % b);
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Unknown operator '%c'. Supported: +, -, *, /, %%\n", op);
            break;
    }

    return 0;
}