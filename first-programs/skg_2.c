#include <stdio.h>

int main(){
    int g1, s1, k1;
    int g2, s2, k2;

    scanf("%d%d%d%d%d%d", &g1, &s1, &k1, &g2, &s2, &k2);

    int sum = g1*17*29 + s1*29 + k1 + g2*17*29 + s2*29 + k2;

    int g3 = sum / (29*17);
    int s3 = (sum - g3*29*17)/29;
    int k3 = sum - g3*29*17 - s3*29;

    printf("%d %d %d", g3, s3, k3);
    return 0;
}