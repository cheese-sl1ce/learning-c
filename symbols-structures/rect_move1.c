#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx);

void move(struct Rect * p, int dx){
    p->x = p->x + dx;
}

int main() {
    struct Rect a;
    scanf("%d%d%d%d", &a.x, &a.y, &a.width, &a.height);
    int dx;
    scanf("%d", &dx);
    printf("%d %d %d %d + %d = ", a.x, a.y, a.width, a.height, dx);
    move(&a, dx);
    printf("%d %d %d %d\n", a.x, a.y, a.width, a.height);
    return 0;
}
