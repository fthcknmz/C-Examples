//using getchar and puts
#include <stdio.h>

int main()
{
    char c;
    char sentence[80];
    int i = 0;

    puts("Enter a line of text:");

    while((c = getchar()) != '\n')  // to read each character
    {
        sentence[i++] = c;
    }

    sentence[i] = '\0';

    puts("\nThe line entered was:");
    puts(sentence);

    return 0;
}
