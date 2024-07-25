#include <stdio.h>
#include <string.h>
int main(){
    char *number[] = {
        "ABC",  // 2
        "DEF",  // 3
        "GHI",  // 4
        "JKL",  // 5
        "MNO",  // 6
        "PQRS", // 7
        "TUV",  // 8
        "WXYZ"  // 9
    };

    int row = sizeof(number) / sizeof(number[0]);
    char word[15] = {};
    int num = 0;
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++){
        for(int j = 0; j < row; j++){
            for(int k = 0; k < strlen(number[j]); k++){
                if(word[i] == number[j][k]){
                    num += j + 3;
                    break;
                }
            }
        }
    }

    printf("%d", num);
}

