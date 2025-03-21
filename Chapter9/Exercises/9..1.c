// Electronic card catalog problem(see improved vertion in 10.1.3.c -> 10.1.4.c -> 10.3.1.c  )
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int menu();
void display();
void author_search();
void title_search();
void enter();
void save();
void load();

char name[MAX][100]; //author name
char title[MAX][50];
char publisher[MAX][50];

int top = 0;//last location used
// main function
int main()
{   
    int choice;
    load();
    do
    {   
        choice = menu();
        switch(choice)
        {
            case 1: enter(); break;
            case 2: author_search(); break;
            case 3: title_search(); break;
            case 4: save(); break;  
        }
    } while(choice != 5);
    
    return 0;
}
int menu()
{
    int choice;
    char str[100];
    printf("Card catalog\n");
    printf("1. Enter\n");
    printf("2. Author search\n");
    printf("3. Title search\n");
    printf("4. Save\n");
    printf("5. Quit\n");
    do
    {
        printf("Enter your choice: ");
        fgets(str,sizeof(str),stdin);
        choice=atoi(str);
    } while(choice < 1 || choice > 5);
    return choice;
}
// Enter books into database
void enter()
{   
    int i;
    for(i=top; i<MAX ; i++)
    {
        printf("Enter author name: ");
        fgets(name[i],sizeof(name[i]),stdin);
        if(name[i][0]=='\n') break;
        printf("Enter title: ");
        fgets(title[i], sizeof(title[i]) , stdin);
        printf("Enter publisher: ");
        fgets(publisher[i], sizeof(publisher[i]) , stdin);
    }
    top=i;
    if(top >= MAX)
    {
        printf("Catalog is full\n");
        return;
    }
}
void author_search()
{
    int i, found=0;
    char search_name[100];
    printf("Enter author name: ");
    fgets(search_name,sizeof(search_name),stdin);
    for(i=0; i<top; i++)
    {
        if(strcmp(name[i], search_name) == 0)
        {
            display(i);
            found = 1;
            printf("\n");
        }
    }
    if(!found) printf("Author not found\n");
}
void title_search()
{
    int i, found=0;
    char search_title[50];
    printf("Enter title: ");
    fgets(search_title,sizeof(search_title),stdin);
    for(i=0; i<top; i++)
    {
        if(strcmp(title[i], search_title) == 0)
        {
            display(i);
            found = 1;
            printf("\n");
        }
    }
    if(!found) printf("Title not found\n");
}
void display(int i)
{
    printf("Author: %s\n", name[i]);
    printf("Title: %s\n", title[i]);
    printf("Publisher: %s\n", publisher[i]);
}
void save()
{
    FILE *fp;
    int i;
    if((fp = fopen("catalog", "w")) == NULL)
    {
        printf("Cannot open file\n");
        return;
    }
    //write the number of data
    fwrite(&top, sizeof(top), 1, fp);
    //write the data
    fwrite(name, sizeof(name), 1, fp);
    fwrite(title, sizeof(title), 1, fp);
    fwrite(publisher, sizeof(publisher), 1, fp);

    fclose(fp);
}
void load()
{
    FILE *fp;
    if((fp = fopen("catalog", "r")) == NULL)
    {
        printf("Catalog file not on the disk.\n");
        return;
    }
    //read the number of data
    fread(&top, sizeof(top), 1, fp);
    //write the data
    fread(name, sizeof(name), 1, fp);
    fread(title, sizeof(title), 1, fp);
    fread(publisher, sizeof(publisher), 1, fp);

    fclose(fp);
}