#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[10005];
    if (fgets(line, sizeof(line), stdin) == NULL) return 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)line[i];
        if (ch == ' ') {
            spaces++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isalpha(ch)) {
            char lower = (char)tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
