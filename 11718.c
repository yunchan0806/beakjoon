#include<stdio.h>
#include<string.h>
#include <time.h>


int main(){
    char a[100];
    while((fgets(a,100,stdin))!= NULL){
        printf("%s", a);
    }
    return 0;
    
}