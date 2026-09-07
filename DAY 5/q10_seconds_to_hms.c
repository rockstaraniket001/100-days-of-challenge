/*
 * Day 5 - Q10: Write a program to input time in seconds and convert it to
 * hours:minutes:seconds format.
 */
#include <stdio.h>

int main(void) {
    long long total_seconds;

    printf("Enter time in seconds: ");
    if (scanf("%lld", &total_seconds) == 1 && total_seconds >= 0) {
        long long hours = total_seconds / 3600;
        long long minutes = (total_seconds % 3600) / 60;
        long long seconds = total_seconds % 60;

        printf("Formatted Time: %02lld:%02lld:%02lld\n", hours, minutes, seconds);
    } else {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }

    return 0;
}