#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bufferedwriter[255];
    FILE *fpw = fopen("Document.txt", "w");

    if (fpw == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }

    printf("\n Masukkan Inputan : ");
    // fgets(bufferedwriter, sizeof(bufferedwriter), stdin);
    // fputs(bufferedwriter,fpw);

    scanf("%[^\n]s", bufferedwriter);
    fprintf(fpw, "%s", bufferedwriter);
    
    fclose(fpw);

    return 0;
}
