/*
 * Day 20 - Q40 (Loops without Arrays/Strings):
 * Write a program to find the 1â€™s complement of a binary number and print it.
 */
#include <stdio.h>

// Helper recursion to print inverted digits from MSB to LSB without arrays/strings
static void print_complement_digits(long long n) {
    if (n == 0) return;
    print_complement_digits(n / 10);
    int digit = n % 10;
    printf("%d", (digit == 0) ? 1 : 0);
}

int main(void) {
    long long binary;

    printf("Enter a binary number (composed only of 0s and 1s): ");
    if (scanf("%lld", &binary) == 1 && binary >= 0) {
        long long temp = binary;
        int valid = 1;

        while (temp > 0) {
            int d = temp % 10;
            if (d != 0 && d != 1) {
                valid = 0;
                break;
            }
            temp /= 10;
        }

        if (!valid) {
            printf("Error: Input is not a valid binary number.\n");
            return 1;
        }

        printf("1's Complement: ");
        if (binary == 0) {
            printf("1\n");
        } else {
            print_complement_digits(binary);
            printf("\n");
        }
    } else {
        printf("Invalid input. Please enter a non-negative binary number.\n");
    }

    return 0;
}