#include <stdio.h>

int main(){
    int bell, nBell;
    scanf("%d%d", &bell, &nBell);

    printf("%d", ((bell+nBell)*(nBell-bell+1))/2);
    return 0;
}