#include <stdio.h>
#define SIZE 10

void bubbleSort(int work[], const int size, int(*compare)(int a, int b));
void ascending(int a, int b);
void descending(int a, int b);

int main()
{
    int order, counter;
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};

    printf("Enter 1 to sort ascending order:\n"
           "Enter 2 to sort descending order:\n");

    scanf("%d",&order);

    printf("\nData items in original order\n");

    for(counter=0;counter<SIZE;counter++)
    {
        printf("%5d",a[counter]);
    }

    if(order==1)
    {
        bubbleSort(a,SIZE,ascending);
        printf("\nData items in ascending order\n");
    }
    else
    {
        bubbleSort(a,SIZE,descending);
        printf("\nData items in descending order\n");
    }

    for(counter = 0; counter<SIZE; counter++)
         printf("%5d",a[counter]);

     printf("\n");
}

void bubbleSort(int work[], const int size, int (*compare)(int a, int b))
{
    int pass, count;
    void swap(int *element1Ptr, int *element2Ptr);

    for(pass=1; pass<size; pass++)
        for(count=0; count<size-1; count++)
            if((*compare)(work[count],work[count+1]))
        {
            swap(&work[count],&work[count+1]);
        }

}

  void swap(int *element1Ptr, int *element2Ptr)
  {
      int hold;
      hold = *element1Ptr;
      *element1Ptr = *element2Ptr;
      *element2Ptr = hold;
  }

void ascending(int a, int b)
{
    if(b<a)
    return 1;

    else
    return 0;
}
void descending(int a, int b)
{
    if(b>a)
    return 1;

    else
    return 0;
}
