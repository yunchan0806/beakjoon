#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int * number = (int *)calloc(a, sizeof(int));

    for(int u = 0; u < b; u++){
        int i, j, k;
        scanf("%d %d %d",&i  ,&j, &k);
        for(i; i <= j; i++){
            number[i-1] = k;
        }
    }
    for(int i = 0; i < a; i++){
        printf("%d ", number[i]);
    }
}