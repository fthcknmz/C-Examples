#include <stdio.h>
void mirrorRecursive(int B[9],int n)
{
    int i,temp;

        temp = B[n];
        B[n] = B [9-n];
        B[9-n] = temp;

  for (i=0;i<9;i++)
        printf("%d\t",B[i]);


}

int main()
{
    int A[9]= {1,2,3,4,5,6,7,8,9};

    mirrorRecursive( A , 9);
}
