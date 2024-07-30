#include <stdio.h>
int main(){
    int a,num = 1;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        for(int j = i; j < a-1; j++){
            printf(" ");
        }
        for(int k = 0; k < num; k++){
            printf("*");
            
        }
        num += 2;
        printf("\n");
    }
    num -= 4;
    for(int i = 0; i < a-1; i++){
        for(int j = 0; j < i+1; j++){
            printf(" ");
        }
        for(int k = 0; k < num; k++){
            printf("*");
            
        }
        num -= 2;
        printf("\n");
    }
}