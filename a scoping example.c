#include <stdio.h>

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1 ;   //Global Variable

int main ()
{
    int x = 5; //Local Variable

    printf("Local x in outer scope of main is %d \n",x);

    {
        int x = 7 ;

        printf("Local x in inner scope of main is %d \n",x);
    }

    printf("Local x in outer scope of main is %d \n",x);


    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();


    printf("Local x in  main is %d \n",x);

    return 0;
}


void useLocal()
{
    int x = 25 ;

    printf("Local x in useLocal before is %d \n",x);

    x++;

    printf("Local x in  useLocal is after %d \n",x);
}

void useStaticLocal()
{
    int x = 50 ;

     printf("Local x in useStaticLocal before is %d \n",x);

    x++;

    printf("Local x in  useStaticLocal is after %d \n",x);

}


void useGlobal()
{

      printf("before Global x is %d \n",x);

      x *= 10;

       printf("after Global x is %d \n",x);
}
