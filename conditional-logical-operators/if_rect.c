#include <stdio.h>

int main(){
    float x, y;
    scanf("%f%f", &x, &y);

    if ((x >= -3 && x <= 2) && (y <= 6 && y >= -4)){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}