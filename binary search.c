#include <stdio.h>
#define SIZE 15

int binarySearch(const int b[], int searchKey, int low, int high);
void printHeader();
void printRow(const int b[], int low, int mid, int high);

int main()
{
    int a[SIZE], i, key, result;

    for(i=0; i<SIZE; i++)
        a[i] = 2 * i;

    printf("Enter a number between 0 and 28: ");
    scanf("%d",&key);

    printHeader();

    result = binarySearch(a, key, 0, SIZE - 1);

    if (result != -1)
        printf("\n%d found in array element %d\n", key, result);

    else
    printf("\n %d not found \n",key);

    return 0;
}


int binarySearch(const int b[], int searchKey, int low, int high)  //until searchKey becomes equal to middle value of the array (which changes with low and high arguments)
                              // or the low value becomes higher than the high value the while loop continue
{

    int middle;

    while(low <= high)
    {
        middle = (low+high)/2 ;

        printRow(b, low, middle, high);

        if(searchKey == b[middle])
            return middle;

        else if(searchKey < b[middle])
        high = middle - 1;

        else
        low = middle + 1;
    }

    return -1;

}

void printHeader()
{

    int i;

    printf("\nSubscripts:\n");

    for(i=0; i<SIZE; i++)
    printf("%3d",i);

     printf("\n");

     for(i=1; i <= 4*SIZE; i++)
     printf("-");

    printf("\n");

}


void printRow(const int b[], int low, int mid, int high)
{

    int i;
    for(i=0; i<SIZE; i++)
    {
       if(i<low || i>high)
            printf("   ");

        else if(i == mid)
            printf("%3d", b[i]);

        else
           printf("%3d", b[i]);
    }

    printf("\n");
}
