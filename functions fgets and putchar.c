// using fgets and putchar
#include <stdio.h>
#include <stdlib.h>

void reverse(const char * const sPtr);

int main()
{
    char sentence[80];

    printf("Enter a line of text:\n");

    fgets(sentence,80,stdin);  //to read line of text

    printf("\nThe line printed backward is:\n");
    reverse(sentence);
    return 0;
}

void reverse(const char * const sPtr)
{
    if(sPtr[0]=='\0')
        return;

    else
    {
        reverse(&sPtr[1]);  //recursion step
        putchar(sPtr[0]);   //to display character
    }
}
