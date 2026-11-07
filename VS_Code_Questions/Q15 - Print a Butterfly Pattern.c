#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int half = (n + 1) / 2;

    for (int wing = 1; wing <= half; wing++) {
        for (int star = 1; star <= wing; star++)
            printf("*");
        for (int space = 1; space <= 2 * (n - wing) + 1; space++)
            printf(" ");
        for (int star = 1; star <= wing; star++)
            printf("*");
        printf("\n");
    }

    for (int wing = half - 1; wing >= 1; wing--) {
        for (int star = 1; star <= wing; star++)
            printf("*");
        for (int space = 1; space <= 2 * (n - wing) + 1; space++)
            printf(" ");
        for (int star = 1; star <= wing; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
