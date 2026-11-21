#include <stdio.h>

int main(void) {
    char s[10005];
    if (scanf("%10000s", s) != 1) return 0;
    int i = 0;
    while (s[i] != '\0') {
        int j = i;
        while (s[j] != '\0' && s[j] == s[i]) j++;
        printf("%c%d", s[i], j - i);
        i = j;
    }
    printf("\n");
    return 0;
}
