#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        const char *words[] = {
            "one", "two", "three", "four", "five",
            "six", "seven", "eight", "nine"
        };
        printf("%s\n", words[n - 1]);
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}
