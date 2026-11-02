#include <stdio.h>

int main(){
    int rub, kop;
    scanf("%d%d", &rub, &kop);

    int sum = rub*100+kop;

    printf("%d %d", sum/106, sum-(sum/106*106));
    return 0;
}