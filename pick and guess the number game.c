#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=3, userGuess, comGuess, A=0;
    srand(time(NULL)); //generate random numbers depends on time

    printf("\n\n\n------>        WELCOME TO ' GUESS WHAT GAME ' BY FETHI CEKINMEZ        <----------\n\n\n");

    comGuess = 1+rand()%10;
    printf("%d",comGuess);

    printf("\n I picked a number between 1 to 10. Guess what;\n");


   do
    {
         i-- ;

        scanf("%d",&userGuess);

        if(userGuess == comGuess)
         {
            i = 0;
            A = 1;
          }


       else if(userGuess < comGuess)
           printf("Nope! Greater than your guess \t %d chance left\n",i);

       else
           printf("Nope! Less than your guess \t %d chance left \n",i);


    }
    while( i>0 );



    if(A == 1)
     printf("CONGURATULATIONS! YOU WON \n");

     else
     printf("\n--->   LOOSER    <-----  :) :) \n");



     return 0 ;


}
