#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int layerRow = i < size - 1 - i ? i : size - 1 - i;
            int layerCol = j < size - 1 - j ? j : size - 1 - j;
            int layer = layerRow < layerCol ? layerRow : layerCol;

            printf("%d", n - layer);
            if (j < size - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
