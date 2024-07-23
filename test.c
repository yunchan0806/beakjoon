#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    int number[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &number[i]);
        number[i] %= 42;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", number[i]);
    }
}

