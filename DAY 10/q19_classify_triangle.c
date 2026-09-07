/*
 * Day 10 - Q19: Write a program to classify a triangle as Equilateral,
 * Isosceles, or Scalene based on its side lengths.
 */
#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter side lengths a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        // Validate triangle inequality
        if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
            if (a == b && b == c) {
                printf("Classification: EQUILATERAL Triangle\n");
            } else if (a == b || b == c || a == c) {
                printf("Classification: ISOSCELES Triangle\n");
            } else {
                printf("Classification: SCALENE Triangle\n");
            }
        } else {
            printf("Invalid sides: The given lengths do not form a valid triangle.\n");
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}