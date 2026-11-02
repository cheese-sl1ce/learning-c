#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float dist(int x1, int y1, int x2, int y2);

float dist(int x1, int y1, int x2, int y2){
    float a = abs(x1-x2);
    float b = abs(y1-y2);
    return (float) sqrt(pow(a,2)+pow(b,2));
}

int main()
{
   int x1, y1, x2, y2;
   float len;

   scanf("%d%d", &x1, &y1);
   scanf("%d%d", &x2, &y2);
   len = dist(x1, y1, x2, y2);
   printf("%.3f\n", len);
   return 0;
}
