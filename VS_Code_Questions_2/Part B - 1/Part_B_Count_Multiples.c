#include <stdio.h>
int countMultiples(int n, int k){
    int count=0;
    for(int i=1; i<=n; i++){
         if(i%k==0){
          count++;

        }
    } 
    return count;
}
int main(void){
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", countMultiples(n, k));

    return 0;
}