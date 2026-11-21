#include <stdio.h>
long long TriangleArea(long width, long length){
 return length * width;
}
int main(void){
    long width, length;
    printf("enter length and width(in this order): ");
    scanf("%d%d", &length, &width);

    printf("the area is: %d sq. units\n", TriangleArea(width, length));

    return 0;
}