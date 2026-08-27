/*
 * Day 12 - Q23: Write a program to calculate library fine based on late days:
 * First 5 days late: Rs 2/day
 * Next 5 days late: Rs 4/day
 * Next 20 days late: Rs 6/day
 * More than 30 days: Membership Cancelled.
 */
#include <stdio.h>

int main(void) {
    int days;

    printf("Enter number of late days: ");
    if (scanf("%d", &days) == 1 && days >= 0) {
        if (days == 0) {
            printf("Book returned on time. Fine = Rs. 0\n");
        } else if (days <= 5) {
            int fine = days * 2;
            printf("Fine = Rs. %d\n", fine);
        } else if (days <= 10) {
            int fine = (5 * 2) + (days - 5) * 4;
            printf("Fine = Rs. %d\n", fine);
        } else if (days <= 30) {
            int fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
            printf("Fine = Rs. %d\n", fine);
        } else {
            printf("Late by %d days (more than 30 days): Membership Cancelled.\n", days);
        }
    } else {
        printf("Invalid input. Late days must be a non-negative integer.\n");
    }

    return 0;
}