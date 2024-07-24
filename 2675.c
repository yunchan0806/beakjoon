#include <stdio.h>
#include <string.h>
int main(){
    int a;
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        int b; char c[9];
        scanf("%d %s", &b, c);
        for(int i = 0; i < strlen(c); i++){
            for(int j = 0; j < b; j++){
                printf("%c", c[i]);
            }
        }
        printf("\n");
    }
}