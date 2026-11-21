#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2 || n > 100000) return 0;
    static long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    long long best = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long d = arr[i] - arr[j];
            if (d < 0) d = -d;
            if (best == -1 || d < best) best = d;
        }
    }
    printf("%lld\n", best);
    return 0;
}
