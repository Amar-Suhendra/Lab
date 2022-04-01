#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%s\n", argv[0]);
    if (argc == 2)
    {
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("%s\n", argv[1]);
        printf("%s\n", argv[2]);
    }
    
    return 0;
}
