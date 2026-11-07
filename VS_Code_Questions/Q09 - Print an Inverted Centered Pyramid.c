#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= row - 1; space++)
            printf(" ");
        for (int star = 1; star <= 2 * (n - row) + 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
