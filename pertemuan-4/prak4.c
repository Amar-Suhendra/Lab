#include<stdio.h>
#include<string.h>

int main()
{
    char nama[] = "Uruha";
    //char namaB[] = "Uruha";

    // strcpy(namaB, nama);
    // printf("%s ", namaB);

    // strcat(nama,namaB);
    // printf("%s", nama);

    // if ( == 0)
    // {
    //     printf("sama");
    // }
    // else
    // {
    //     printf("gk sama");
    // }

    int result = strlen(nama);

    printf("%d", result);
    
    return 0;
}