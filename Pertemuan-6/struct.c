#include <stdio.h>

typedef int angkabulat;
typedef struct Menu
{
    char *nama;
    angkabulat harga;
    angkabulat jumlah;
}pesanan;

//struct Menu menu1, menu2
pesanan menu1, menu2;

int main()
{

    menu1.nama = "Nasi Goreng";
    menu1.harga = 15000;
    menu1.jumlah = 1;

    menu2.nama = "Nasi Putih";
    menu2.harga = 10000;
    menu2.jumlah = 2;

    printf("%s\n", menu1.nama);
    printf("%d\n", menu1.harga);
    printf("%s\n", menu2.nama);
    printf("%d\n", menu2.harga);

    return 0;
}
