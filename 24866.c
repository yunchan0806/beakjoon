#include <stdio.h>
int main(){
    char a[1001];
    int c;
    scanf("%s %d" ,a, &c);
    c--;
    printf("%c", a[c]);
}