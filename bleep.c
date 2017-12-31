#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    bool bleep = false;
    char word[5];
    scanf("%s", word);
    if (strlen(word) == 4)
    {
        bleep = true;
    }
    if (bleep)
    {
        printf("$#@!\n");
    }
    else
    {
    printf("%s\n", word);
    }
    
}