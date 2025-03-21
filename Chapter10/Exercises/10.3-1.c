// Telephone directory program using structures(improved version)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct address
{
    char street[40];
    char city[40];
    char state[30];
    char zip[12];
};
struct phone_type
{
    char name[40];
    int areacode;
    char number[20];
    struct address adrs;
} phone[MAX];
int loc = 0;

int menu();
void enter();
void find();
void load();
void save();

int main()
{
    int coice;
    do
    {
        coice = menu();
        switch (coice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            load();
            break;
        case 4:
            save();
            break;
        }
    }while(coice != 5);

    return 0;
}
int menu()
{
    int coice;
    char str[80];
    printf("\n1. Enter names and numbers\n");
    printf("2. Find a number\n");
    printf("3. Load directory from disk\n");
    printf("4. Save directory to disk\n");
    printf("5. Quit\n");
    do
    {
        printf("Enter your choice: ");
        gets(str);
        coice = atoi(str);
        printf("\n");
    } while (coice < 1 || coice > 5);
    
    return coice;
}
void enter()
{   
    char temp[80];
    for( ;loc<MAX;loc++)
    {
        printf("Enter name: ");
        gets(phone[loc].name);
        if(!*phone[loc].name)break;
        printf("Enter area code: ");
        gets(temp);
        phone[loc].areacode = atoi(temp);
        printf("Enter number: ");
        gets(phone[loc].number);
        //input address info
        printf("Enter street address: ");
        gets(phone[loc].adrs.street);
        printf("Enter city: ");
        gets(phone[loc].adrs.city);
        printf("Enter state: ");
        gets(phone[loc].adrs.state);
        printf("Enter zip code: ");
        gets(phone[loc].adrs.zip);
    }
    
}
void find()
{
    char searchname[80];
    int i;
    printf("Enter name: ");
    gets(searchname);
    for(i=0;i<100;i++)
    {
        if(!strcmp(searchname, phone[i].name))
        {
            printf("Name: %s\n", phone[i].name);
            printf("Area code: %d\n", phone[i].areacode);
            printf("Number: %s\n", phone[i].number);
            printf("street address:%s\n city:%s \nstate:%s\n zip code:%s \n",
            phone[i].adrs.street,phone[i].adrs.city,phone[i].adrs.state,phone[i].adrs.zip);
            return;
        }
    }
}
void load()
{
    FILE *fp;
    if((fp = fopen("Phone2.txt", "rb")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    loc = 0;
    while (!feof(fp))
    {
        fread(&phone[loc],sizeof phone[loc], 1, fp );
        loc++;
    }
    fclose(fp);
}
void save()
{
    FILE *fp;
    int i;
    if((fp = fopen("Phone2.txt", "wb")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    for(i=0;i<loc;i++)
    {
        fwrite(&phone[i],sizeof phone[i], 1, fp );
    }
    fclose(fp);
}