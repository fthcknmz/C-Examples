#include <stdio.h>

int main ()
{
    char string1[20];
    char string2[] = "string literal" ;
    int i;

    printf("enter a string:");
    scanf("%s",string1);

     printf("string1 is : %s\n",string1);
     printf("string2 is : %s\n",string2);
     printf("string1 with spaces between characters is ");

      for(i=0; string1[i] != '\0'; i++)  //we can reach each character of string
      printf("%c ",string1[i]);


}

