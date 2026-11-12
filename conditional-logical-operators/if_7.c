#include <stdio.h>

int main(){
    char x, x_1;
    int y, y_1;

    scanf("%c%d-%c%d", &x, &y, &x_1, &y_1);
    printf("%c%d-%c%d\n", x, y, x_1, y_1);

    if (x != x_1 && y != y_1){
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}