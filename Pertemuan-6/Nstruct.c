#include <stdio.h>

struct alamat
{
    char *nama_jalan;
};


struct siswa
{
    char *nama;
    int nim;
    struct alamat address;
};


int main()
{
    struct siswa siswa1;

    siswa1.nama = "anto";
    siswa1.nim = 12345;
    siswa1.address.nama_jalan = "jalan sebelah kiri";

    printf("%s\n", siswa1.nama);
    printf("%d\n", siswa1.nim);
    printf("%s\n", siswa1.address.nama_jalan);
    
    return 0;
}
