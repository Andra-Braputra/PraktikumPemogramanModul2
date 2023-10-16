#include <stdio.h>

int main(){

    char nama[30], ttl[40], alamat[50], hobi[30], NIM[30], hp[30];
    int par;
    
    printf("Nama   : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM   : ");
    fgets(NIM, sizeof(NIM), stdin);

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
    fgets(hp, sizeof(hp), stdin);

    printf("\n\n");

    printf("Nama   : %s", nama);
    printf("NIM    : %s\n", NIM);
    printf("Kelas Paralel   : %d\n", par);
    printf("Tempat/Tanggal Lahir   : %s", ttl);
    printf("Alamat   : %s", alamat);
    printf("hobi   : %s", hobi);
    printf("No. HP    : %s\n", hp);

    return 0;
}