/*
 * Day 5 - Q9: Write a program to calculate simple and compound interest for given
 * principal, rate, and time.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;

    printf("Enter Principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Invalid principal.\n");
        return 1;
    }

    printf("Enter Annual Rate of Interest (in %%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Invalid interest rate.\n");
        return 1;
    }

    printf("Enter Time period (in years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid time period.\n");
        return 1;
    }

    double simple_interest = (principal * rate * time) / 100.0;
    double amount = principal * pow(1.0 + (rate / 100.0), time);
    double compound_interest = amount - principal;

    printf("\n--- Interest Details ---\n");
    printf("Simple Interest   = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount (CI) = %.2lf\n", amount);

    return 0;
}