#include <stdio.h>

int main(){
    int n,k;
    scanf("%d%d", &n, &k);
    int v_s = n / 4;
    if (v_s <= k){
        printf("%d", v_s);
    } else if (v_s > k){
        printf("%d", k);
    }
}