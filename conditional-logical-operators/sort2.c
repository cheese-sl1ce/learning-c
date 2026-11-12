#include <stdio.h>

void sort2(int * a, int * b);

void sort2(int * a, int * b){
    int temp = 0;
    if (*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    sort2(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
