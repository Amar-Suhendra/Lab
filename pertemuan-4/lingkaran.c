#include <stdio.h>

float luas_lingkaran(float r)
{
    float luas;
    float pi = 3.14;
    luas = pi * r * r;

        return luas;
}

int main()
{
    int r = 9;
    float luas;
    luas = luas_lingkaran(r);
    printf("Luas lingkaran dengan jari jari = 9 adalah %.2f", luas);
    return 0;
}
