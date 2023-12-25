#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr);

int main()
{
    char string[] = "characters and $38.92" ;

    printf("the string before conversion is : %s",string);
    convertToUppercase( string );
    printf("\nThe string after conversion is: %s\n",string);
    return 0;
}

void convertToUppercase(char *sPtr) //convert string to uppercase letters
{
    while (*sPtr != '\0')
    {
        if (islower(*sPtr))
            *sPtr = toupper(*sPtr);
      ++sPtr;

    }
}
