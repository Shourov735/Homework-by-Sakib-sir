// Electronic card catalog problem(see improved vertion in 9..1.c -> 10.1.3.c -> 10.1.4.c -> 10.3.1.c  )
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int menu();
void display();
void author_search();
void title_search();
void enter();

char name[MAX][100]; //author name
char title[MAX][50];
char publisher[MAX][50];

int top = 0;//last location used
// main function
int main()
{   
    int choice;
    do
    {
        choice = menu();
        switch(choice)
        {
            case 1: enter(); break;
            case 2: author_search(); break;
            case 3: title_search(); break;
        }
    } while(choice != 4);
    
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
    printf("4. Quit\n");
    do
    {
        printf("Enter your choice: ");
        gets(str);
        choice=atoi(str);
        //scanf("%d", &choice); it makes buffer problem
    } while(choice < 1 || choice > 4);
    return choice;
}
void enter()
{   
    int i;
    for(i=top; i<MAX ; i++)
    {
        printf("Enter author name: ");
        gets(name[i]);
        if(!*name[i]) break;
        printf("Enter title: ");
        gets(title[i]);//it can be written as fgets(title, sizeof(title) , stdin);
        printf("Enter publisher: ");
        gets(publisher[i]);
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
    gets(search_name);
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
    gets(search_title);
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
