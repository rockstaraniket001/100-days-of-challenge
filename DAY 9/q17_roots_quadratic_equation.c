/*
 * Day 9 - Q17: Write a program to find the roots of a quadratic equation
 * (ax^2 + bx + c = 0) and categorize them.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == 0.0) {
            printf("Coefficient 'a' cannot be 0 for a quadratic equation.\n");
            return 1;
        }

        double discriminant = (b * b) - (4 * a * c);
        printf("Discriminant = %.4lf\n", discriminant);

        if (discriminant > 0.0) {
            double r1 = (-b + sqrt(discriminant)) / (2.0 * a);
            double r2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("Roots are REAL and DISTINCT:\n");
            printf("Root 1 = %.4lf\n", r1);
            printf("Root 2 = %.4lf\n", r2);
        } else if (discriminant == 0.0) {
            double r = -b / (2.0 * a);
            printf("Roots are REAL and EQUAL:\n");
            printf("Root 1 = Root 2 = %.4lf\n", r);
        } else {
            double realPart = -b / (2.0 * a);
            double imagPart = sqrt(-discriminant) / (2.0 * a);
            printf("Roots are COMPLEX and CONJUGATE:\n");
            printf("Root 1 = %.4lf + %.4lfi\n", realPart, imagPart);
            printf("Root 2 = %.4lf - %.4lfi\n", realPart, imagPart);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}