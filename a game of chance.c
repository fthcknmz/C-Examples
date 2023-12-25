#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {COUNTINUE,  WON, LOST};  // enumeration constants represent game status

int rollDice(void);  //function prototype



int main()
{
    int sum ,myPoint ;
    enum Status gameStatus;

    srand(time(NULL));  // randomize random number generator by using time

    sum = rollDice();  // first roll of the dice

    switch(sum)
    {
       case 7:
       case 11:
            gameStatus = WON;
       break;

       case 2:
       case 3:
       case 12:
            gameStatus = LOST;
       break;


       default:
        gameStatus = COUNTINUE;
        myPoint = sum ;
        printf("point is %d\n", myPoint);
        break;

    }

    while (gameStatus == COUNTINUE)   //while the game is  not complete
    {
        sum = rollDice();

         if( sum == myPoint)     //WİN BY MAKİNG POİNTS
            gameStatus = WON ;
          else
          {
              if (sum == 7)      // lose by rolling 7
                gameStatus = LOST;

          }

    }


    if (gameStatus == WON)
        printf("player wins \n");

    else
       printf("player loses \n");

    return 0;

}



     int rollDice(void)
     {
         int die1,die2,workSum ;

         die1 = 1+ (rand()%6); //pick random value for first die
         die2 = 1+ (rand()%6); //pick random value for second die

         workSum = die1 + die2;

         printf("Player rolled %d + %d = %d \n",die1,die2,workSum);

         return workSum;
     }











