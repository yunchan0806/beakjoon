#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    
    scanf("%d", &a);
    
    int* b = (int *)malloc(a * sizeof(int));\
    int c;
    int f;
    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
        if(i == 0){
            c = b[i];
            f = b[i];
            continue;
        }
        if(c < b[i]){
            c = b[i];
        }
        if(f > b[i]){
            f = b[i];
        }

    }
    printf("%d", c*f);
}