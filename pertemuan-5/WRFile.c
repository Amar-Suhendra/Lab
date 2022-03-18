#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[300];
    FILE *fptr;
    
    fptr = fopen("Document.txt", "w+");

    if (fptr == NULL)
    {
        printf("File lo gk ada");
        exit(1);
    }

    printf("\nMasukkan Inputan : ");
    scanf("%s", buffer);
    fprintf(fptr, "%s", buffer);
    fclose(fptr);

    fptr = fopen("Document.txt", "w+");
    fscanf(fptr,"%s", buffer);
    printf("%s", buffer);
    fclose(fptr);
    
    return 0;
}
