#include <stdio.h>

int main(){
    int v_kh;
    float v_ms;
    scanf("%d", &v_kh);

    v_ms = (float)v_kh * 1000 / (60*60);

    printf("%f", v_ms);
}