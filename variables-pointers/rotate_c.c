#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);

void rotateC(int *x1, int *y1, int *x2, int *y2){
    int cx = (*x1 + *x2)/2;
    int cy = (*y1 + *y2)/2;

    int new_x1 = cx - *y1 + cy;
    int new_y1 = cy + *x1 - cx;
    int new_x2 = cx - *y2 + cy;
    int new_y2 = cy + *x2 - cx;

    *x1 = new_x1;
    *y1 = new_y1;
    *x2 = new_x2;
    *y2 = new_y2;
}

int main(){
    int xlt, ylt, xrb, yrb;
    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);

    rotateC(&xlt, &ylt, &xrb, &yrb);

    printf("%d %d %d %d", xlt, yrb, xrb, ylt);
    return 0;
}