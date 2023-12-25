#include <stdio.h>

int main()
{
    int account;
    char name[30];
    double balance;

    FILE *cfPtr;  // cfPtr = clients.txt file pointer

    cfPtr = fopen("clients.txt", "w");

    if(cfPtr == NULL )  //fopen opens file. Exit program if unable to create file.
    {
        printf("File could not be opened \n");
    }



    else
    {
        printf("Enter the account, name and balance\n");
        printf("Enter EOF to end input\n");
        printf("? ");
        scanf("%d%s%lf", &account, name, &balance);

        //write account, name and balance into file with fprintf
        while( !feof(stdin) )  // stdin refers the end of file indicator ( ctrl-z in windows)
        {
            fprintf(cfPtr,"%d %s %.2f\n", account, name, balance);
            printf("? ");
            scanf("%d%s%lf", &account, name, &balance);
        }
        fclose( cfPtr );
    }
      return 0;
}
