#include <stdio.h>

int main(){
    int x = getchar();
    int y = getchar();

    printf("%c%c ", x - 1, y);
    printf("%c%d ", x, y - '0' + 1);
    printf("%c%c ", x + 1, y);
    printf("%c%d", x, y - '0' - 1);
    return 0;
}