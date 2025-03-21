// Telephone directory program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[100][40], number[100][40];
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
    for( ;loc<100;loc++)
    {
        printf("Enter name: ");
        gets(name[loc]);
        if(!*name[loc])break;
        printf("Enter number: ");
        gets(number[loc]);
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
        if(!strcmp(searchname, name[i]))
        {
            printf("Name: %s\n", name[i]);
            printf("Number: %s\n", number[i]);
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
    while(!feof(fp))
    {
        fscanf(fp, "%s %s\n", name[loc], number[loc]);
        loc++;
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
        fprintf(fp, "%s %s\n", name[i], number[i]);
    }
    fclose(fp);
}