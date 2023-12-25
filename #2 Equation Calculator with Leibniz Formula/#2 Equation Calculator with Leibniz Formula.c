
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float **ArrayA,**ArrayM,count=1.00,count2=1.00,totalpositive = 0.00,totalnegative = 0.00,determinant = 0.00;
    int i,j,howMany;

    printf("How many number do you want to average?\n");
    scanf("%d",&howMany);
    ArrayA = malloc(sizeof(int*)*howMany);
    ArrayM = malloc(sizeof(int*)*howMany);
    for(i = 0; i < howMany; i++)
    {
        ArrayA[i] = (malloc(sizeof(float)*howMany));
        ArrayM[i] = (malloc(sizeof(float)*howMany));
     }

    printf("Enter the A: \n");
    for (i = 0; i < howMany; i++)
        for (j = 0; j < howMany; j++)
            scanf("%f",&ArrayA[i][j]);

    for (i = 0; i < howMany; i++)
    {
        printf("\n");
        for (j = 0; j <howMany; j++)
            printf("%f \t", ArrayA[i][j]);
    }

      printf("\n");
        printf("\n");

    //mirroring A
      for (i = 0; i < howMany; i++)
           for (j = 0; j <howMany; j++)
             ArrayM[i][howMany-j-1]=ArrayA[i][j];

     for (i = 0; i < howMany; i++)
    {
        printf("\n");
        for (j = 0; j <howMany; j++)
            printf("%f \t", ArrayM[i][j]);
    }



      printf("\n");
      printf("\n");


  for (i = 0; i < howMany; i++)
  {
      for (j = 0; j < howMany; j++)
      {
          if((i+j)>=howMany)
          {
           count= count*ArrayA[j][j+i-howMany];
           printf("%f count is:%f\n",ArrayA[j][j+i-howMany],count);
          }

          else
          {
           count= count*ArrayA[j][j+i];
           printf("%f count is:%f\n",ArrayA[j][j+i],count);
          }

      }
      totalpositive = totalpositive + count;
      printf("\n");
      printf("\n totalpositive is:%f\n",totalpositive);
      count=1.00;

  }




   printf("\n");
printf("\n");


  for (i = 0; i < howMany; i++)
  {
      for (j = 0; j < howMany; j++)
      {
          if((i+j)>=howMany)
          {
           count2 = count2*ArrayM[j][j+i-howMany];
           printf("%f count2 is:%f\n",ArrayM[j][j+i-howMany],count2);
          }

          else
          {
           count2= count2*ArrayM[j][j+i];
           printf("%f count2 is:%f\n",ArrayM[j][j+i],count2);
          }

      }
      totalnegative = totalnegative + count2;
      printf("\n");
      printf("\n totalnegative is:%f\n",totalnegative);
      count2=1.00;

  }


    determinant = totalpositive - totalnegative ;

    printf("\ndeterminant A is: %f",determinant);



    return 0;
}
