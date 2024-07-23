#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int* number =(int *)malloc(a * sizeof(int));
    for(int i = 0; i < a; i++){
        number[i] = i+1;
    }
    for(int i = 0; i < b; i++){
        int j, k, temp;
        scanf("%d %d", &j, &k);
        temp = number[j-1];
        number[j-1] = number[k-1];
        number[k-1] = temp;
    }

    for(int i = 0; i < a; i++){
        printf("%d " , number[i]);
    }
}