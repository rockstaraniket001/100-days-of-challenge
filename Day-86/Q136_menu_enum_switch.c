/*
Day: 86
Question: Q136
Title: Menu Choices Enum with Switch
Problem:
Use enum for menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(void)
{
    enum Operation op;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
    scanf("%d", (int *)&op);

    switch (op) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
