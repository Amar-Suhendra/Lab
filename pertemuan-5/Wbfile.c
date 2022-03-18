#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[255];
    FILE *fptr = fopen("Bfile.bin", "wb");

    if (fptr == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }
    scanf("%s", buffer);
    getchar();
    fwrite(buffer, sizeof(int), sizeof(buffer)/sizeof(char), fptr);
    fclose(fptr);
    return 0;
}
