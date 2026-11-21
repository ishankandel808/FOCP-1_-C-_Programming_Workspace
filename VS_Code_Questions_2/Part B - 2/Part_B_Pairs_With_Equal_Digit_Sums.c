#include <stdio.h>

int digitSum(long long x) {
    if (x < 0) x = -x;
    int s = 0;
    while (x > 0) {
        s += (int)(x % 10);
        x /= 10;
    }
    return s;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) return 0;
    static long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(arr[i]) == digitSum(arr[j])) count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}
