#include <stdio.h>

int main(){
    int a, b;
    scanf("%d:%d", &a, &b);
    printf("%d:%d\n", a, b);

    if (a>b){
        printf("%d", 2);
    } else if (a == b){
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}