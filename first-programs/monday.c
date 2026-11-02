#include <stdio.h>

int main(){
    int n, day;
    scanf("%d%d", &n, &day);

    printf("%d", (n-day)/7+1);
    return 0;
}