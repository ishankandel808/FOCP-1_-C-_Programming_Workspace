#include <stdio.h>
int PieceFunction(int x){
    if(x<0){
        return x * x + 2 * x + 1;

    } else if(x>=0 && x<10){
        return 3 * x + 2;

    } else {
        return  5 * x - 7;

    }
}

int main(void){
    int x;
    scanf("%d", &x);
    printf("%d", PieceFunction(x));

    return 0;
}