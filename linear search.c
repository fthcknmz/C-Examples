#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);


int main()
{
    int a[SIZE], x, seachKey, element;

    for(x=0; x<SIZE; x++)
          a[x] = 2*x ;

    printf("the array is \n");

    for(x=0; x<SIZE; x++)
          printf("%d ",a[x]);

    printf("\n");
     printf("\n");

    printf("Enter integer search key:\n");
    scanf("%d",&seachKey);

    element = linearSearch(a, seachKey, SIZE);

    if(element != -1)
        printf("Found value in element %d\n",element);

    else
        printf("Value not found \n");

    return 0;
}

int linearSearch(const int array[], int key, int size)
{
    int n;

    for(n=0; n<size; n++)
    {
        if(array[n] == key )
             return n;
    }

    return -1;

}



