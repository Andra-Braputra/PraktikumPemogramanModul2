#include <stdio.h>

int main() {
    int a, b, i, j, x, y;
    float hasil;

    printf("");
    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);

    hasil = ((float)((float)((float)((a - b) * i) / j) - x) + y);

    printf("Hasil: %.3f\n", hasil);

    float aa, bb, ii, jj, xx, yy;
    float hasil2;

    printf("");
    scanf("%f %f", &aa, &bb);
    printf("");
    scanf("%f %f", &ii, &jj);
    printf("");
    scanf("%f %f", &xx, &y);

    hasil2 = (((((aa - bb) * ii) / jj) - xx) + yy);

    printf("Hasil: %.3f\n", hasil2);

    return 0;
}