#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    int *b = (int *)malloc(a * sizeof(int));
    int num;
    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    scanf("%d", &num);
    int num1 = 0;
    for(int i = 0; i < a; i++){
        if(num == b[i])
            num1++;

    }
    printf("%d", num1);
}