#include <stdio.h>

struct clientData{
    int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int enterChoice();
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);


int main()
{
    FILE *cfPtr;
    int choice;

    if((cfPtr = fopen("credit.dat","rb+")) == NULL)
        printf("File could not opened.\n");

    else{

       while((choice = enterChoice()) != 5){
        switch (choice){

            case 1:
                textFile(cfPtr);
            break;

             case 2:
                updateRecord(cfPtr);
            break;

             case 3:
                newRecord(cfPtr);
            break;

             case 4:
                deleteRecord(cfPtr);
            break;


             default:
                printf("Incorrect choice\n");
            break;
        }
       }
    fclose(cfPtr);
    }

    return 0;
}

int enterChoice(){
    int menuChoice;

    printf("\nEnter your choice\n"
           "1 - store a formatted text file of accounts called\n"
           "    \"accounts.txt\" for printing\n"
           "2 - update an account\n"
           "3 - add a new account\n"
           "4 - delete an account\n"
           "5 - end program\n? ");

    scanf("%d", &menuChoice);
    return menuChoice;
}

void textFile(FILE *readPtr){

    FILE *writePtr;

    struct clientData client = {0, "", "", 0.0};

    if((writePtr = fopen("accounts.txt","w")) == NULL)
        printf("File could not opened.\n");

    else{
        rewind(readPtr);
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");


        while( !feof(readPtr)){

            fread(&client, sizeof(struct clientData), 1, readPtr);

        if( client.acctNum != 0)
            fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);

        }
    fclose(writePtr);
    }
}

void updateRecord(FILE *fPtr){
    int account;
    double transaction;

    struct clientData client = {0, "", "", 0.0};

    printf("Enter account to update ( 1 - 100 ):\n");
    scanf("%d",&account);

    fseek(fPtr, (account-1)*sizeof(struct clientData), SEEK_SET);

    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.acctNum == 0)
        printf("Account #%d has no information\n", account);

    else{
        printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);

        printf("Enter charge ( + ) or payment ( - ): ");
        scanf("%lf", &transaction);
        client.balance += transaction;
        printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);

       fseek(fPtr, (account-1)*sizeof(struct clientData), SEEK_SET);

       fwrite(&client, sizeof(struct clientData), 1, fPtr);

    }
}


void newRecord(FILE *fPtr){

    struct clientData client = {0, "", "", 0.0};

    int accountNum;
    printf("Enter new account number ( 1 - 100 ):\n");
    scanf("%d",&accountNum);

    fseek(fPtr, (accountNum-1)*sizeof(struct clientData), SEEK_SET);

    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.acctNum != 0)
        printf("Account #%d already contains information\n", client.acctNum);

    else{

        printf("Enter lastName, firstName, balance\n?");
        scanf("%s%s%lf", &client.lastName, &client.firstName, &client.balance);

        client.acctNum = accountNum;

       fseek(fPtr, (client.acctNum-1)*sizeof(struct clientData), SEEK_SET);

       fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }

}

void deleteRecord(FILE *fPtr){

    struct clientData client;
    struct clientData blankClient = {0, "", "", 0.0};

    int accountNum;

    printf("Enter account to delete ( 1 - 100 ):\n");
    scanf("%d",&accountNum);

    fseek(fPtr, (accountNum-1)*sizeof(struct clientData), SEEK_SET);

    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.acctNum == 0)
        printf("Account #%d does not exist\n", accountNum);

    else{

       fseek(fPtr, (accountNum-1)*sizeof(struct clientData), SEEK_SET);

       fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }
}
