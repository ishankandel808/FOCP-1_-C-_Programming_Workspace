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
        for (int j = 0; j < c; j++) {
            long long v = a[i][j];
            int rowMin = 1;
            for (int k = 0; k < c; k++) {
                if (a[i][k] < v) { rowMin = 0; break; }
            }
            if (!rowMin) continue;
            int colMax = 1;
            for (int k = 0; k < r; k++) {
                if (a[k][j] > v) { colMax = 0; break; }
            }
            if (colMax) {
                printf("%d %d %lld\n", i, j, v);
                return 0;
            }
        }
    }
    printf("None\n");
    return 0;
}
