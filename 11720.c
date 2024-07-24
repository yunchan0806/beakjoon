#include <stdio.h>
#include <string.h>
int main(){
    int a;
    int c = 0;
    char v;
    scanf("%d", &a);
    getchar();
    for(int i = 0; i < a; i++){
        scanf("%c", &v);
        c += (v-48);
   
    }
    printf("%d", c);
}