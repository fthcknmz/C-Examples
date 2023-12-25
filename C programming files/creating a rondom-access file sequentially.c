
#include <stdio.h>

struct clientData{
    int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
    };

int main()
{
    int i;

    struct clientData blankClient = {0, "", "", 0.0}; // create clientData with default information

    FILE *cfPtr;

    if( (cfPtr = fopen("credit.dat", "wb")) == NULL )
    {
        printf("File could not be opened.\n");
    }

    else{
       for(i=0; i<=100; i++)
        fwrite(&blankClient, sizeof(struct clientData), 1 , cfPtr);
    }

    fclose(cfPtr);
    return 0;
}
