#include <stdio.h>

int main(){
    int h, m;
    scanf("%d%d", &h, &m);
    printf("%d\n%d", h*60+m, (h*60+m)*60);
    return 0;
}