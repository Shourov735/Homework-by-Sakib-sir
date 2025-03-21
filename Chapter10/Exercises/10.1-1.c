// Telephone directory program using structures
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct phone_type
{
    char name[40];
    int areacode;
    char number[20];
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
            return;
        }
    }
}
void load()
{
    FILE *fp;
    int i;
    if((fp = fopen("phone.txt", "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    loc = 0;
    while (fscanf(fp, "%39s %d %19s", phone[loc].name, &phone[loc].areacode, phone[loc].number) == 3)
    {
        loc++;
        if (loc >= MAX) break; // Prevent overflow if the file has more entries than MAX
    }
    fclose(fp);
}
void save()
{
    FILE *fp;
    int i;
    if((fp = fopen("phone.txt", "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    for(i=0;i<loc;i++)
    {
        fprintf(fp, "%s %d %s\n", phone[i].name, phone[i].areacode, phone[i].number);
    }
    fclose(fp);
}