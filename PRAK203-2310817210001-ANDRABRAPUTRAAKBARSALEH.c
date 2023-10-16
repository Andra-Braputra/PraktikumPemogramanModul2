#include <stdio.h>

int main() {
    int a, b, i, j, x, y;
    float hasil;

    printf("");
    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);

    hasil = ((float)(a - b) * i / j - (x + y));

    printf("Hasil: %.3f\n", hasil);

    int aa, bb, ii, jj, xx, yy;
    float hasil2;

    printf("");
    scanf("%d %d", &aa, &bb);
    printf("");
    scanf("%d %d", &ii, &jj);
    printf("");
    scanf("%d %d", &xx, &yy);

    hasil2 = ((float)(aa - bb) * ii / jj - (xx + yy));

    printf("Hasil: %.3f\n", hasil2);

    return 0;
}