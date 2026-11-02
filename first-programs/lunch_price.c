#include <stdio.h>

int main(){
    int k_rice, k_veg, n;
    scanf("%d%d", &k_rice, &k_veg);
    n = k_rice + (k_veg*2);
    printf("%d", n);
    return 0;
}