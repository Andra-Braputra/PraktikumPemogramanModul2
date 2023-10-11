#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, t, k, l;

    printf("");
    scanf("%d %d", &A, &B);

    C = sqrt((B * B) - (A * A));
    k = A + B + C;
    l = A * C / 2;

    printf("Alas = %d\n", C);
    printf("Tinggi = %d\n", A);
    printf("Keliling = %d\n", k);
    printf("luas = %d^2\n", l);

    int A2, B2, C2, t2, k2, l2;

    printf("");
    scanf("%d", &A2);
    printf("");
    scanf("%d", &B2);

    C2 = sqrt(B2 * B2 - A2 * A2);
    k2 = A2 + B2 + C2;
    l2 = A2 * C2 / 2;

    printf("Alas = %d\n", C2);
    printf("Tinggi = %d\n", A2);
    printf("Keliling = %d\n", k2);
    printf("luas = %d^2\n", l2);

    return 0;
}