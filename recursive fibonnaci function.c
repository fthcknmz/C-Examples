
// exponential complexity happens here  (n^th)

#include <stdio.h>
long fibonacci(long n);
int main()
{
    long result, number;

    printf("Enter an integer:  ");
    scanf("%d",&number);

    result = fibonacci(number);

    printf("\n Fibonacci(%d) = %d \n",number, result);

    return 0;

}


long fibonacci(long n)
{
    if( n == 0 || n == 1)
        return n;

    else
        return fibonacci(n-1) + fibonacci (n-2);
}
