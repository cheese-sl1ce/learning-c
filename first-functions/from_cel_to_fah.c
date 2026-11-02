#include <stdio.h>

float fahr(int cel);
float celsius(int fahr);

float fahr(int cel){
    return (float)cel * 9 / 5 + 32;
}

float celsius(int fahr){
    return (float) (fahr - 32) / 9 * 5; 
}

int main()
{
    int cel;
    float f;

    scanf("%d", &cel);
    f = celsius(cel);
    printf("%.4f\n", f);

    return 0;
}
