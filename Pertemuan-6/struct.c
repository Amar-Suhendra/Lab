#include <stdio.h>

typedef struct Menu
{
    char *nama;
    int harga;
    int jumlah;
}pesanan;

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
    printf("%s\n", menu2.nama);

    return 0;
}
