#include <stdio.h>

int main(){

    char nama[30], ttl[40], alamat[50], hobi[30];
    int NIM, par, hp;
    
    printf("Nama   : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM   : ");
    scanf("%d", &NIM);

    printf("Kelas Paralel   : ");
    scanf("%d", &par);

    while ((getchar()) != '\n');

    printf("Tempat/Tanggal Lahir   : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("alamat   : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby   : ");
    fgets(hobi, sizeof(hobi), stdin);

    printf("No. HP  : ");
    scanf("%d", &hp);

    printf("\n\n");

    printf("Nama   : %s", nama);
    printf("NIM    : %d\n", NIM);
    printf("Kelas Paralel   : %d\n", par);
    printf("Tempat/Tanggal Lahir   : %s", ttl);
    printf("Alamat   : %s", alamat);
    printf("hobi   : %s", hobi);
    printf("No. HP    : %d\n", hp);

    return 0;
}