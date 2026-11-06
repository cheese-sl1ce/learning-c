#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int h; // часы
    int min; // минуты (от 0 до 59)
}TicTac;

// получает показание часов a и возвращает показание этих часов
// через min минут, .
TicTac after(TicTac a, int min);

// "переводит" вперед стрелки этих часов (me)
// на a.h часов и a.min минут
void forward(TicTac * me, TicTac a);

// "переводит" назад стрелки этих часов (me)
// на a.h часов и a.min минут
void backward(TicTac * me, TicTac a);

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b);

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a);

TicTac after(TicTac a, int min){
    TicTac af;
    af.h = a.h;
    af.min = a.min;
    int s = af.h*60 + af.min + min;

    af.h = (s/60)%12;
    af.min = s - 60*(s/60);

    return af;
}

void forward(TicTac * me, TicTac a){
    int s_add = a.h * 60 + a.min;
    TicTac fd = after(*me, s_add);
    me->h = fd.h;
    me->min = fd.min;
}

void backward(TicTac * me, TicTac a){
    int s_sub = (a.h * 60 + a.min);
    int s = me->h * 60 + me->min;

    s = s - s_sub;
    TicTac bd;
    if (s<0){
        s = abs(s);
        bd.h = (s/60)%12;
        bd.min = s - 60*(s/60);

        s = (12*60 - (bd.h*60 + bd.min)) % (12*60);
    }
    me->h = (s/60);
    me->min = s - 60*(s/60);
}

int isEqualTime(TicTac a, TicTac b){
    if (a.h == b.h && a.min == b.min){
        return 1;
    } else{
        return 0;
    }
}

void printTic(TicTac a){
    printf("%02d:%02d\n", a.h, a.min);
}

int main(){
    TicTac a,b,c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n",isEqualTime(a,b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}
