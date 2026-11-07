#include <stdio.h>

int main(void)
{
    int l, r, k;
    scanf("%d %d %d", &l, &r, &k);

    printf("%d\n", r / k - (l - 1) / k);
    return 0;
}
