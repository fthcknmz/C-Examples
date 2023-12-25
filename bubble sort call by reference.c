#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const int size);

int main ()
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    int i;

    printf("data items in original order :");
    for (i=0; i<10; i++)
        printf("%d  ",a[i]);

    bubbleSort(a,SIZE);
    printf("\n");

    printf("data items in ascending order :");
    for (i=0; i<10; i++)
        printf("%d  ",a[i]);
     printf("\n");
     return 0;
}

void bubbleSort(int * const array, const int size)
{
    void swap (int *element1Ptr, int *element2Ptr);

    int pass, j;

    for(pass=0; pass<size-1; pass++)
         for(j=0; j<size; j++)
         if(array[j] > array[j+1])
            swap(&array[j],&array[j+1]);

}
void swap (int *element1Ptr, int *element2Ptr)
{
        int hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
}

