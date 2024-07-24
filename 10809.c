#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char c[101];
    int a[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    scanf("%s", &c);

    for(int i = 0; i < strlen(c); i++){
        if(a[(int)c[i] - 97] == -1){
            a[(int)c[i] - 97] = i;
        }
       
    }

    for(int i = 0; i <26; i++){
        printf("%d ", a[i]);
    }
}