#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial *= i;

    printf("%lld\n", factorial);
    return 0;
}
