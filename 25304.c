#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, n, num = 0;
    scanf("%d %d" ,&a, &n);

    int* b = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        int r, t;
        scanf("%d %d", &r, &t);
        b[i] = r * t;
        num += b[i];
    }


    if(num == a){
        printf("Yes");
    }
    else if(num != a){
        printf("No");
    }
}