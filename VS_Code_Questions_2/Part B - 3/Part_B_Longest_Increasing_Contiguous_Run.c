#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) return 0;
    static long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    int current = 1, best = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}
