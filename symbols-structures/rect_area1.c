struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

#include <stdio.h>
#include <math.h>

int area(struct Rect a);

int area(struct Rect a){
    return abs(a.lt.x - a.rb.x)*abs(a.lt.y - a.rb.y);
}