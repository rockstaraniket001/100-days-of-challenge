/*
 * Day 11 - Q22: Write a program to find profit or loss percentage given
 * cost price and selling price.
 */
#include <stdio.h>

int main(void) {
    double cp, sp;

    printf("Enter Cost Price (CP): ");
    if (scanf("%lf", &cp) != 1 || cp <= 0) {
        printf("Invalid Cost Price. Must be positive.\n");
        return 1;
    }

    printf("Enter Selling Price (SP): ");
    if (scanf("%lf", &sp) != 1 || sp < 0) {
        printf("Invalid Selling Price.\n");
        return 1;
    }

    if (sp > cp) {
        double profit = sp - cp;
        double profit_pct = (profit / cp) * 100.0;
        printf("Profit = %.2lf (%.2lf%%)\n", profit, profit_pct);
    } else if (cp > sp) {
        double loss = cp - sp;
        double loss_pct = (loss / cp) * 100.0;
        printf("Loss = %.2lf (%.2lf%%)\n", loss, loss_pct);
    } else {
        printf("No Profit, No Loss (0.00%%)\n");
    }

    return 0;
}