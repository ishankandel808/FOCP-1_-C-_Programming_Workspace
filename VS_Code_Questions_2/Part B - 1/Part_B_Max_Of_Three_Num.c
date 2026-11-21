#include <stdio.h>
int MaxOfThree(int a, int b, int c){
    if(a>b && a>c){
        return a;

    } else if(b>a && b>c){
        return b;

    } else {
        return c;
    } 
}
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", MaxOfThree(a, b, c));

    return 0;
}