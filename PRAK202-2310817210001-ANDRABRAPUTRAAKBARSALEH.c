#include <stdio.h>

int main(){

    int satu;
    float dua;

    printf("Test Case ke 1 : \n");

    printf("Masukkan Nilai Pertama : ");
    scanf("%d", &satu);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &dua);

    float hasil = (float)(satu + dua);
    
    printf("Hasil dari penjumlahan nilai pertama %d dan nilai kedua %.1f adalah %.2f\n", satu, dua, hasil);
    
    printf("Test Case ke 2 : \n");

    float one;
    float two;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &one);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &two);

    float hasil2 = (float)(one + two);
    
    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.1f adalah %.2f", one, two, hasil2);

    return 0;
}