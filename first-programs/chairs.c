#include <stdio.h>

int main(){
    float s, w, ch;
    scanf("%f%f%f", &s, &w, &ch);

    printf("%d", (int)(s/w/ch));
}