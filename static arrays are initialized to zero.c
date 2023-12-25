#include <stdio.h>

// this codes show use differences between static and automatic duration in arrays

void staticArrayInit();
void automaticArrayInit();

int main ()
{
    printf("first call to each function \n");
     staticArrayInit();
     automaticArrayInit();

     printf("second call to each function \n");
     staticArrayInit();
     automaticArrayInit();

     return 0;

}

void staticArrayInit()
{
    static int array1[3];
    int i;

    printf("Values on entering staticArrayInit\n");

    for(i=0; i<=2; i++)
          printf("array1[%d] = %d     ",i,array1[i]);


    printf("Values on entering staticArrayInit\n");

    for(i=0; i<=2; i++)
          printf("array1[%d] = %d     ",i,array1[i]+=5);
}


void automaticArrayInit()
{
    int array2[3]={1,2,3};
    int i;

    printf("Values on entering automaticArrayInit\n");

    for(i=0; i<=2; i++)
          printf("array2[%d] = %d     ",i,array2[i]);


    printf("Values on entering automaticArrayInit\n");

    for(i=0; i<=2; i++)
          printf("array2[%d] = %d     ",i,array2[i]+=5);
}
