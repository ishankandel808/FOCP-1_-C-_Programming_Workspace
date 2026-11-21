#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0 || r > 1000 || c > 1000) return 0;
    static long long a[1000][1000];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        long long sum = 0;
        for (int j = 0; j < c; j++) sum += a[i][j];
        printf(i == 0 ? "%lld" : " %lld", sum);
    }
    printf("\n");
    for (int j = 0; j < c; j++) {
        long long sum = 0;
        for (int i = 0; i < r; i++) sum += a[i][j];
        printf(j == 0 ? "%lld" : " %lld", sum);
    }
    printf("\n");
    return 0;
}
