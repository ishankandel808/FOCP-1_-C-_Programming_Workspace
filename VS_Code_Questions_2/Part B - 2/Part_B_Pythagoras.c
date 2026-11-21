#include <stdio.h>

int isqrt(long long x) {
    long long lo = 1, hi = 1000000, ans = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (mid * mid <= x) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return (int)ans;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1 || N < 1) return 0;
    int found = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            long long sum = (long long)a * a + (long long)b * b;
            int c = isqrt(sum);
            if ((long long)c * c == sum && c > b && c <= N) {
                printf("%d %d %d\n", a, b, c);
                found = 1;
            }
        }
    }
    if (!found) printf("None\n");
    return 0;
}
