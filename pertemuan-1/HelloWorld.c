// Bagian include
#include <stdio.h>
/**
 * Include berfungsi untuk mengimport fungsi fungsi sudah didefinisikan pada header file.
 * Header file berektensi .h, pada kasus ini adalah file stdio.h
 * File stdio.h sudah ada secara default pada komputer ketika menginstall gcc 
 */

// fungsi utama
int main()
/**
 * main() adalah sebuah fungsi utama dalam program. Fungsi ini akan dieksekusi pertama kali saat program dijalankan
 * Int itu adalah sebuah tipe data, fungsi juga dapat diganti dengan tipe data lain sesuai dengan kebutuhan.
 */

// Block kode adalah kumpulan statement, sebuah blok kode ditandai dengan kurung kurawal
{ // bagian awal dari blok kode

    // statement adalah sebuah ekspresi, contohnya printf tersebut yang akan mencetak "Hello World!"
    printf("Hello World!");

    return 0;
    /**
    * statement ini akan mengembalikan nilai 0, yang artinya fungsi main() akan mengembalikan nilai 0.
    * Statement ini wajib ada jika tipe data dari sebuah fungsi itu bukan void.
    */

} // bagian akhir dari blok kode
