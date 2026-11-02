#include <stdio.h>

int main(){
    int n;
    float k;
    scanf("%d%f", &n, &k);

    printf("%d", (int)((float)n-(n*k)));
    return 0;
}