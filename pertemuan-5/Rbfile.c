#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[255];
    FILE *fptr = fopen("Bfile.bin", "rb");

    if (fptr == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }
    fread(buffer, strlen(buffer), 50, fptr);
    printf("%s\n", buffer);
    fclose(fptr);
    return 0;
}
