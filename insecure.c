#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char password[8];
}
FILEHEADER;

int main(int argc, char *argv[])
{
    // iterate over strings in argv
    for (int i = 0; i < argc; i++)
    {
        // iterate over characters in current string
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            // print j'th caracter in i'th string
            printf("%c\n", argv[i][j]);
        }
        
    }

}