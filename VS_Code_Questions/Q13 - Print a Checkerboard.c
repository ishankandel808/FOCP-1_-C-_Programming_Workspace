#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if ((row + col) % 2 == 0)
                printf("X");
            else
                printf("O");
        }
        printf("\n");
    }

    return 0;
}
