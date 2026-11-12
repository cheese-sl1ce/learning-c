#include <stdio.h>

int triangle_len_type(a, b, c){
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        if (a == b && b == c){
            return 2;
        } else if ((a == b) || (a == c) || (b == c)){
            return 1;
        } else {
            return 0;
        }
    } else {
        return -1;
    }
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("%d", triangle_len_type(a, b, c));

    return 0;
}