// using strtok

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "This is a sentence with 7 tokens";
    char *tokenPtr;

    tokenPtr = strtok(string," ");

    while(tokenPtr != NULL)
    {
        printf("%s\n",tokenPtr);
        tokenPtr = strtok(NULL," ");
    }
}
