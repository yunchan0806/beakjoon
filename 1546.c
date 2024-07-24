#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    scanf("%d", &a);

    int* b = (int *)malloc(a * sizeof(int));
    float* z = (float *)malloc(a * sizeof(float));

    for(int  i =0; i < a; i++){
        scanf("%d", &b[i]);
    }
    float c = 0;
    int d= 0;
    for(int  i = 0; i < a; i++){
        if(i == 0){
            d= b[i];
        }
        else if(d < b[i]){
            d = b[i];
        }
    }

    for(int  i = 0; i < a; i++){
        z[i] = ((float)b[i])/d*100;
        
        c += z[i];
    }


    
    printf("%f", c/a);
}