#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char a[200];
    bool flag = true;
    scanf("%s", a);
    int n = strlen(a);

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            flag = false;

            break;
        }
    }

    printf("%d\n", flag ? 1 : 0);
    return 0;
}
