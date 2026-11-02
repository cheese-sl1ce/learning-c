#include <stdio.h>

int main(){
    float m, h, bmi;
    scanf("%f%f", &m, &h);
    bmi = m / (h*h);
    printf("%f", bmi);
    return 0;
}