#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d", row);
            if (col < row)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
