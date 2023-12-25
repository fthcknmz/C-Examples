#include <stdio.h>

int main()
{
    int account;
    char name[30];
    double balance;

    FILE *cfPtr;  // cfPtr = clients.dat file pointer
    cfPtr = fopen("clients.txt", "r");
    if(cfPtr == NULL )  //fopen opens file. Exit program if unable to create file.
    {
        printf("File could not be opened \n");
    }

    else
    {
        printf("%-10s %-13s %s \n","Account", "Name", "Balance");
        fscanf( cfPtr, "%d%s%lf", &account, name, &balance);

        while( !feof(cfPtr) )  //read account, name and balance into file with fprintf
        {
            printf("%-10d %-13s %7.2f \n",account, name, balance);
            fscanf( cfPtr, "%d%s%lf", &account, name, &balance);
        }
        fclose( cfPtr );
    }
      return 0;
}
