#include <stdio.h>
#include <stdlib.h>
int main(){
    int m, n, k, l,temp;

    scanf("%d %d", &m, &n);
    m++;
    int* b = (int *)malloc(m * sizeof(int));
    for(int i = 1; i < m; i++){
        b[i] = i;
    }
    for(int i = 0; i < n; i++){
        scanf("%d %d", &k, &l);
        int v = l - k;
        
        for(int d = 0; d < v; d++){
            temp = b[k];
            b[k] = b[l];
            b[l] = temp;
            k++;
            l--;
            if(k >= l){
                break;
            }
        }
    }
    for(int i = 1; i < m; i++){
        printf("%d ", b[i]);
    }
}