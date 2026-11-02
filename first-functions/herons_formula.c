#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);


float dist(int x1, int y1, int x2, int y2){
    float a = abs(x1-x2);
    float b = abs(y1-y2);
    return (float) sqrt(pow(a,2)+pow(b,2));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3){
    float p = (dist(x1, y1, x2, y2) + dist(x1, y1, x3, y3) + dist(x3, y3, x2, y2))/2;
    float s = sqrt(p * (p-dist(x1, y1, x2, y2)) * (p-dist(x1, y1, x3, y3)) * (p-dist(x3, y3, x2, y2)));
    return s;
}

int main(){
    int x1, y1, x2, y2, x3, y3;

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

    float s = area(x1, y1, x2, y2, x3, y3);
    printf("%0.3f", s);
    return 0;
}