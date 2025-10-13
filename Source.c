#include <stdio.h>

int main() {
    float x, a;

    printf(" Tsena  moloko v marte: ");
    scanf_s("%f", &x);

    printf("Uvilicheni: ");
    scanf_s("%f", &a);

    float march = 4 * 31 * x;
    float april = 4 * 30 * (x + x + a);
    float total = march + april;

    printf("Mart: %.2f rubl\n", march);
    printf("Aprel: %.2f rubl\n", april);
    printf("Vsevo: %.2f rubl\n", total);

    return 0;
}