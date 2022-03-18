#include<stdio.h>

float Lsegitiga(int a, int t){
    float total;
    total = ( (float) a * (float) t ) / 2;

    return total;
}

int main()
{
    int a = 3;
    int t = 5;
    float hasil;
    hasil = Lsegitiga(a,t);
    printf("Luas segitiga = %.1f", hasil);
    return 0;
}
