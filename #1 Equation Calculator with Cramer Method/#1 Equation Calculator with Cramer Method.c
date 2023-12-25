#include <stdio.h>
#include <math.h>
float deter(float A[10][10], int n)
{
   int i, j, k;
   float ratio, detA;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j>i){
                ratio = A[j][i]/A[i][i];
                for(k = 0; k < n; k++){
                    A[j][k] -= ratio * A[i][k];
                }
            }
        }
    }
    detA = 1; //storage for determinant
    for(i = 0; i < n; i++)
        detA *= A[i][i];

    return(detA);
}

//___________________________________________________________________________________________________________________


//___________________________________________________________________________________________________________________

int main(){
printf("Welcome to equation calculator by Fethi Cekinmez\n\n\n\n");

    float  A[10][10], B[10], ratio, detA;
    int i, j, k, n;

    float F[10][10],detF[10],X[10];


    printf("Enter the order of A: ");
    scanf("%d", &n);
    printf("\n\t\t\t\t  ------------------------------------- \n");
      printf("\t\t\t\t | The notation of equation is: A * X = B | \n");
      printf("\t\t\t\t  -------------------------------------\n\n");

    printf("Enter the A: \n");     //get A
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%f", &A[i][j]);

printf("\n------------------------------------------");
    for( i = 0; i < n; i = i + 1 )
        {
              printf("\n");
        for( j = 0; j< n; j = j+ 1 )
              printf("%f\t", A[i][j]);
        }

printf("\n------------------------------------------\n\n");

   printf("Enter B: ");
  for( i = 0; i < n; i = i + 1 )   //get  B
        scanf("%f",&B[i]);

 printf("\n---------------------------\n");
   for( i = 0; i < n; i = i + 1 )
        printf("%f\t", B[i]);

printf("\n-----------------------------\n");

    printf("\nCALCULATIN X PLEASE WAIT.....\n\n");



    for(k=1;k<n+1; k=k+1)
    {

         for(i=0;i<n; i=i+1)
             for(j=0;j<n; j=j+1)
              {
                   if(j==k)
                   F[i][j] = B[i];
                   else
                    F[i][j] = A[i][j];
              }



        detF[k] = deter(F,n);
    }





printf("\n------------------------------------------");

      detA = deter(A,n);
        printf("\n\nThe determinant of A is: %.2f\n\n",detA);

        if(detA==0)
             printf("NO SOLUTION SINCE detA IS ZERO!");

        else
        {
             for(k=1;k<n+1; k=k+1)
         printf("\n\nThe determinant of F[%d] is: %.2f\n\n",k ,detF[k]);



     for(i=1;i<n+1;i++)
          X[i]= detF[i] / detA;


    for(i=1;i<n+1;i++)
         printf("\n X[%d];\t%f",i,X[i]);

        }














    return 0;
}
