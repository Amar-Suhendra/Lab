#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[300];
    FILE *fptr = fopen("Document.txt", "r");

    if (fptr == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }

    // fgets(buffer, 255, fptr);
    fscanf(fptr,"%s", buffer);
    
    printf("%s", buffer);

    fclose(fptr);
    return 0;
}
