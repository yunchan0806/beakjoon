#include <stdio.h>
#include <string.h>

int change(int a, int b, int c){
    a -=48;
    b -=48;
    c -=48;
    
    c = c * 100;
    b = b * 10;

    return a+b+c;
}
int main(){
    char number1[4] = {};
    char number2[4] = {};
    scanf("%s%s", number1, number2);
    

    int num1 = change(number1[0],number1[1],number1[2]);
    int num2 = change(number2[0],number2[1],number2[2]);

    printf("%d", (num1 > num2) ? num1 : num2);
}