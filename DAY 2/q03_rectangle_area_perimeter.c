/*
 * Day 2 - Q3: Write a program to calculate the area and perimeter of a rectangle
 * given its length and breadth.
 */
#include <stdio.h>

int main(void) {
    double length, breadth;

    printf("Enter length of rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0) {
        printf("Invalid input. Length must be positive.\n");
        return 1;
    }

    printf("Enter breadth of rectangle: ");
    if (scanf("%lf", &breadth) != 1 || breadth <= 0) {
        printf("Invalid input. Breadth must be positive.\n");
        return 1;
    }

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    printf("Area      = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);

    return 0;
}