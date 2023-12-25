#include <stdio.h>

int cubebyValue(int n);

void cubebyReference(int *nPtr);

int main()
{
    int number1 = 5 ;
    int number2 = 5 ;


    printf("The original value of number1 is : %d\n" ,number1);
      number1 = cubebyValue( number1 );
       printf("The new value of number1 is : %d\n\n" , number1);

    printf("The original value of number2 is : %d\n"   ,number2);
    cubebyReference( &number2 );
       printf("The new value of number2 is : %d\n" , number2);



return 0 ;
}


int cubebyValue(int n)
{
    return n*n*n;
}
void cubebyReference(int * nPtr)
{
    *nPtr = *nPtr*  *nPtr* * nPtr ;
}
