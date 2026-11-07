#include <stdio.h>

int main(void)
{
    int n;
    char s[64];

    scanf("%d", &n);         
    scanf("%63s", s);         

    printf("%d\n", n * 2);    
    printf("%s\n", s);        

    return 0;
}
