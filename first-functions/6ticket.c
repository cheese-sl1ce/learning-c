#include <stdio.h>

void print_revers(int x);

void print_revers(int x){
    int xx = x;
    printf("%d", xx%10);
    xx = xx/10;
    printf("%d", xx%10);
    xx = xx/10;
    printf("%d", xx%10);
    xx = xx/10;
    printf("%d", xx%10);
    xx = xx/10;
    printf("%d", xx%10);
    xx = xx/10;
    printf("%d", xx);
}

int main(){
    int x;
    scanf("%d", &x);
    print_revers(x);
}