#include <stdio.h>

int main() {
    float r, h, v, l, k;

    printf("");
    scanf("%f", &r);
    printf("");
    scanf("%f", &h);

    v = (float)(3.14) * r * r * h;
    l = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
    k = 2 * 3.14 * r;

    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);

    float r2, h2, v2, l2, k2;

    printf("");
    scanf("%f", &r2);
    printf("");
    scanf("%f", &h2);

    v2 = 3.14 * r2 * r2 * h2;
    l2 = (2 * 3.14 * r2 * h2) + (2 * 3.14 * r2 * r2);
    k2 = 2 * 3.14 * r2;

    printf("Volume = %.2f\n", v2);
    printf("Luas = %.2f\n", l2);
    printf("Keliling = %.2f\n", k2);

    return 0;
}