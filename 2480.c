#include <stdio.h>
int same;
void find_high(int* a, int* b, int* c){
    int temp;
    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a < *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
int find(int a, int b, int c){
    int d = 0;
    if(a == b){
        d++;
        same = a;
    }
    if(a == c){
        d++;
        same = a;
    }
    if(b == c && d == 0){
        d++;
        same = b;
    }
    if(d == 2){
        same = a;
    }

    return d;
}
int main(){
    int a,b,c, money, h;
    scanf("%d %d %d", &a, &b, &c);
    h =  find(a, b, c);
    if(0 == h){
        find_high(&a, &b, &c);
        money = a * 100;
    }
    else if(1 == h){
        money = 1000 + same * 100;
    }
    else if(2 == h){
        money = 10000 + a * 1000;
    }
    
    printf("%d", money);
}