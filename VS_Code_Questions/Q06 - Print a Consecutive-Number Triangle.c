#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int value = 1;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d", value);
            if (col < row)
                printf(" ");
            value++;
        }
        printf("\n");
    }

    return 0;
}
