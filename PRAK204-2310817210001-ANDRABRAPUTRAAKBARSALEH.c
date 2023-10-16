#include <stdio.h>
#include <math.h>

int main() {
    float r, h, v, l, k;
    float pi = 3.14;

    printf("");
    scanf("%f", &r);
    printf("");
    scanf("%f", &h);

    v = 22 * r * r * h / 7;
    l = (2 * 22 * r * h / 7) + (2 * 22 * r * r / 7);
    k = 2 * 22 * r / 7;

    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);

    float r2, h2, v2, l2, k2;

    printf("");
    scanf("%f %f", &r2, &h2);

    v2 = 22 * r2 * r2 * h2 / 7 ;
    l2 = (2 * 22 * r2 * h2 / 7) + (2 * 22 * r2 * r2 / 7);
    k2 = 2 * 22 * r2 / 7;

    printf("Volume = %.2f\n", v2);
    printf("Luas = %.2f\n", l2);
    printf("Keliling = %.2f\n", k2);

    return 0;
}