#include <stdio.h>

void swap(int * px, int * py);

void swap(int * px, int * py){
    int t = *py;
    *py = *px;
    *px = t;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);      // если ввели 2 3

    swap(&x, &y);

    printf("%d %d\n", x, y);    // то напечатает 3 2

    return 0;
} 
