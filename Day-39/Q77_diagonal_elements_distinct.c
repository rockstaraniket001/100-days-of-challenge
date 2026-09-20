/*
Day: 39
Question: Q77
Title: Check if Diagonal Elements are Distinct
Problem:
Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, distinct = 1;
    int mat[20][20];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
