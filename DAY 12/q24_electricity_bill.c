/*
 * Day 12 - Q24: Write a program to calculate electricity bill based on units
 * consumed with these rates:
 * First 100 units at Rs 5/unit
 * Next 100 units at Rs 7/unit
 * Next 100 units at Rs 10/unit
 * Above at Rs 12/unit
 */
#include <stdio.h>

int main(void) {
    double units;

    printf("Enter total electricity units consumed: ");
    if (scanf("%lf", &units) == 1 && units >= 0) {
        double bill = 0.0;
        if (units <= 100.0) {
            bill = units * 5.0;
        } else if (units <= 200.0) {
            bill = (100.0 * 5.0) + ((units - 100.0) * 7.0);
        } else if (units <= 300.0) {
            bill = (100.0 * 5.0) + (100.0 * 7.0) + ((units - 200.0) * 10.0);
        } else {
            bill = (100.0 * 5.0) + (100.0 * 7.0) + (100.0 * 10.0) + ((units - 300.0) * 12.0);
        }

        printf("Total Electricity Bill = Rs. %.2lf\n", bill);
    } else {
        printf("Invalid input. Units must be non-negative.\n");
    }

    return 0;
}