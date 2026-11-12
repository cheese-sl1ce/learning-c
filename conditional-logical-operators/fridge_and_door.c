#include <stdio.h>

void sort2(int * a, int * b);
void sort3(int * x, int * y, int * z);

void sort2(int * a, int * b){
    int temp = 0;
    if (*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void sort3(int * x, int * y, int * z){
    sort2(x,y);
    sort2(y,z);
    sort2(x,y);
}

int main(){
    int w, h;
    int a, b, c;
    int f = 0;

    scanf("%d%d", &w, &h);
    scanf("%d%d%d", &a, &b, &c);

    sort2(&w, &h);
    sort3(&a, &b, &c);

    if (a <= w){
        f = 1;
    } else if (b <= w){
        f = 2;
    } else if (c <= w){
        f = 3;
    }

    if (f != 0){
        if ((f == 1) && (b <= h || c <= h)){
            printf("YES");
        } else if ((f == 2) && (a <= h || c <= h)){
            printf("YES");
        } else if ((f == 3) && (a <= h || b <= h)){
            printf("YES");
        } else {
            printf("NO");
        }

    } else {
        printf("NO");
    }

    return 0;
}