#include <stdio.h>
int main(){
    int h,m, num;
    scanf("%d %d %d", &h, &m, &num);
    int sum = m + num;
    m = sum % 60;
    h =  ((sum / 60) + h) % 24;

    printf("%d %d", h, m);
} 