#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%d %d\n", x, y);

    if (x<=y){
        printf("%d", x);
    } else{
        printf("%d", y);
    }

}