#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned seed;  // number used to seed random number generator

    printf("enter seed: ");
    scanf("%u",&seed);    // %u for unsigned

    srand( seed ); // seed random number generator

    for(i=0; i<=10; i++)
    {

        printf("%10d", 1 + (rand()%6)); //pick random number from 1 to 6 and output

        if(i%5 == 0)            //if i is divisible by 5 begin new line
            printf("\n");

    }
        return 0;
}
