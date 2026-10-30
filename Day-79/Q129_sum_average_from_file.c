/*
Day: 79
Question: Q129
Title: Sum and Average of Integers from File
Problem:
numbers.txt contains integers separated by spaces. Read all, calculate sum and average, print both.
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int num, count = 0;
    long long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found\n");
        return 0;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", (double)sum / count);

    return 0;
}
