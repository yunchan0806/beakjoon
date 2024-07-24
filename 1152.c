#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char s [1000001];
    int a = 0;
    
    bool flag = false;
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if(s[len -1] == '\n'){
        s[len - 1] = '\0';
        len--;
    }
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' '){
            if(!flag){
                flag = true;
                a++;
            }
        }else{
            flag = false;
        }
    }
    printf("%d" ,a);
} 