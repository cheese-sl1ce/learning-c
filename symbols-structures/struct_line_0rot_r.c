#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;    // начало отрезка
    Point b;    // конец отрезка
    float len;  // длина отрезка
} Line;

float distance(Point a, Point b);   // расстояние между точками
void scanLine(Line * t);
void printLine(Line t);
void rotRLine(Line * t);

float distance(Point a, Point b){
    return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
}

void scanLine(Line * t){
    scanf("%d%d%d%d", &t->a.x, &t->a.y, &t->b.x, &t->b.y);
    t->len = distance(t->a, t->b);
}

void printLine(Line t){
    printf("%d %d %d %d %0.3f", t.a.x, t.a.y, t.b.x, t.b.y, t.len);
}

void rotRLine(Line * t){
    int x;

    x = t->a.x;
    t->a.x = t->a.y;
    t->a.y = -x;

    x = t->b.x;
    t->b.x = t->b.y;
    t->b.y = -x;
}

int main() {
    Line t;

    scanLine(&t);
    rotRLine(&t);
    printLine(t);

    return 0;
}
