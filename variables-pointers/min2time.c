#include <stdio.h>

void min2time(int mm, int * ph, int * pm);

void min2time(int mm, int * ph, int * pm){
    *ph = mm/60;
    *pm = mm - *ph * 60;
    *ph = *ph % 24;
}

int main()
{
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}