/*
Day: 77
Question: Q127
Title: Convert File Content to Uppercase
Problem:
Read text from input.txt, convert all lowercase letters to uppercase, write to output.txt.
*/

#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    printf("Converted content written to output.txt\n");

    fclose(in);
    fclose(out);
    return 0;
}
