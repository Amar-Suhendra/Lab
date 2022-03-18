#include <stdio.h>

void lWhileCL(){
    // ==================== while loop (counted loop) ====================
        int angka = 10;
        int angka1 = 1;
        while (angka1 <= angka){
            printf("%d ", angka1);
            angka1++;
        }
    // ==================== while loop (counted loop) ====================
}

void lWhileEL(){
    // ==================== while loop (encounted loop) ====================
        int count = 0;
        char kondisi = 'n';
        while (kondisi == 'y'){
            printf("Perulangan ini sudah diulang sebanyak %d kali \n", count);
            printf("Apakah anda ingin mengulangnya (y/n) ? ");
            scanf(" %c", &kondisi);
            if (kondisi == 'y'){
                count++;
            }
        }
    // ==================== while loop (encounted loop) ====================
}

void dWhileCL(){
    // ==================== do while loop (counted loop) ====================
        int angka = 10;
        int angka1 = 1;
        do{
            printf("%d ", angka1);
            angka1++;
        }while (angka1 < angka);
    // ==================== do while loop (counted loop) ====================
}

void dWhileEL(){
    // ==================== do while loop (encounted loop) ====================
        int count = 0;
        char kondisi = 'n';
        do{
            printf("Perulangan ini sudah diulang sebanyak %d kali \n", count);
            printf("Apakah anda ingin mengulangnya (y/n) ? ");
            scanf(" %c", &kondisi);
            if (kondisi == 'y'){
                count++;
            }
        } while (kondisi == 'y');
    // ==================== do while loop (encounted loop) ====================
}

void fLoop(){
    // ==================== for loop ====================
        // int angka = 10;
        // int angka1 = 0 ;
        // for (angka1; angka1 < angka; angka1++)
        // {
        //     printf("%d ", angka1);
        // }
    // ==================== for loop ====================
}

void BC(){
    // ==================== Break & Continue ====================
        int angka = 10;
        int angka1;
        for (angka1 = 0; angka1 <= angka; angka1++)
        {
            if (angka1 == 5)
            {
                break;
            }else{
                printf("%d ", angka1);
                continue;
            }
            printf("Lmao ");
        }
        printf("%d ", angka1);
    // ==================== Break & Continue ====================
}

void nLoop(){
    // ==================== nested loop ====================
        int bil1 = 0;
        while (bil1 <= 10)
        {
            for (int i = 10; i > bil1; --i)
            {
                printf("%d ", i);
            }
            printf("\n");
            bil1++;
        }
    // ==================== nested loop ====================
}

void array(){
    int bil[] = {0,1,2,3,8,9};
    int panjangArray = sizeof(bil) / sizeof(*bil);

    printf("%d ", bil[4]);
    printf("%d ", panjangArray);
    
}

int main()
{
    // lWhileCL();

    // lWhileEL();

    // dWhileCL();

    // dWhileEL();

    // fLoop();

    // BC();

    // nLoop();

     array();

    return 0;
}
