#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bufferedwriter[255];
    FILE *fpw = fopen("Document.txt", "a");

    if (fpw == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }

    printf("\n Masukkan Inputan : ");
    scanf("%s", bufferedwriter);
    fprintf(fpw, "%s", bufferedwriter);
    return 0;
}
