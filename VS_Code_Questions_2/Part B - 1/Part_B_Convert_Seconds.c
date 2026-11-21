#include <stdio.h>
void SecToMinAndHour(int sec){
    int hour=0, min=0;
    while(sec>=60){
        sec-=60;
        min++;
    } 
    while(min>=60){
        min-=60;
        hour++;
    }
    printf("%d %d %d", hour, min, sec);    
}
 
int main(void){
    int hour, min, sec;
    scanf("%d", &sec);

    SecToMinAndHour(sec);

    return 0;
}