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
    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long v = a[i][j];
            int isPeak = 1;
            if (i > 0 && a[i - 1][j] >= v) isPeak = 0;
            if (i < r - 1 && a[i + 1][j] >= v) isPeak = 0;
            if (j > 0 && a[i][j - 1] >= v) isPeak = 0;
            if (j < c - 1 && a[i][j + 1] >= v) isPeak = 0;
            if (isPeak) peaks++;
        }
    }
    printf("%d\n", peaks);
    return 0;
}
