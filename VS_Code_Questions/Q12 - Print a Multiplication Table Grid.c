#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            printf("%d", row * col);
            if (col < n)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
