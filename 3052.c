#include <stdio.h>
int main(){
    int  num = 0;
    int a[42] = {0};
    int b[10] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%d", &b[i]);
        b[i] %= 42;
        a[b[i]] = 1;
    }

    for(int i = 0; i < 42; i++){
        if(a[i] == 1){
            num++;
        }
    }

    printf("%d", num);
}