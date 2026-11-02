#include <stdio.h>
#include <math.h>


int main()
{
    double a, v0, g = 9.81, h;

   scanf("%lf", &a);
   scanf("%lf", &v0);

   double arad = a * (M_PI / 180.0);
   h = (v0 * v0 * sin(arad) * sin(arad) / (2 * g));

   printf("Максимальная высота подъема %lf м\n", h);

   return 0;
}