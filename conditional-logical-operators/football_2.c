#include <stdio.h>

int main(){
    int a_1, b_1;
    int a, b;
    scanf("%d:%d", &a_1, &b_1);
    scanf("%d:%d", &a, &b);

    a += a_1;
    b += b_1;
    printf("%d:%d\n", a, b);

    if (a > b){
        printf("%d", 2);
    } else if (a == b){
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}