#include<stdio.h>
#include <stdlib.h>
int main(){
    int *a = (int *)malloc(28 * sizeof(int));
    int b[2] = {-1, -1};
    for(int i = 0; i <  28; i++){
        scanf("%d", &a[i]);
    }
    int k = 0;
    for(int i = 1; i <= 30; i++){
        int flag = 0;
        for(int j = 0; j < 28; j++){
            if(i == a[j]){
                flag = 1;
                break;
            }else{
                flag = 0;
            }
        }
        if(flag == 0){
            b[k++] = i;
        }
    }

    printf("%d %d", b[0], b[1]);
}