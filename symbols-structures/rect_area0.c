#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};
int area(struct Rect a);

int area(struct Rect a){
    return a.width * a.height;
}

int main() {
    struct Rect a;
    scanf("%d%d%d%d", &a.x, &a.y, &a.width, &a.height);
    printf("%d %d %d %d %d\n", a.x, a.y, a.width, a.height, area(a));
    return 0;
}
