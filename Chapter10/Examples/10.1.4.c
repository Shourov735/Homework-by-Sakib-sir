// Electronic Card catalog problem(see improved vertion in 10.3.1.c)
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

struct catalog
{   
    char name[100]; //author name
    char title[50];
    char publisher[50];
    unsigned year;
    unsigned edition;
} cat[MAX];
int top = 0;
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
void enter()
{   
    int i;
    char temp[50];
    for(i=top; i<MAX ; i++)
    {
        printf("Enter author name: ");
        fgets(cat[i].name, sizeof(cat[i].name), stdin);
        if(cat[i].name[0] == '\n') break;//if user enters nothing, break
        //It can also be written as if(*cat[i].name=='\n') break;
        printf("Enter title: ");
        fgets(cat[i].title, sizeof(cat[i].title) , stdin);
        printf("Enter publisher: ");
        fgets(cat[i].publisher, sizeof(cat[i].publisher) , stdin);
        printf("Enter copyright year: ");
        fgets(temp, sizeof(temp) , stdin);
        //temp[strcspn(temp, "\n")]=0;
        cat[i].year=(unsigned) atoi(temp);
        printf("Enter edition: ");
        fgets(temp, sizeof(temp) , stdin);
        cat[i].edition=(unsigned) atoi(temp);
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
        if(strcmp(cat[i].name, search_name) == 0)
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
    printf("\n");
    for(i=0; i<top; i++)
    {
        if(strcmp(cat[i].title, search_title) == 0)
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
    printf("Author: %s\n", cat[i].name);
    printf("Title: %s\n", cat[i].title);
    printf("Publisher: %s\n", cat[i].publisher);
    printf("Year: %u\n", cat[i].year);
    printf("Edition: %u\n", cat[i].edition);
}
void save()
{
    FILE *fp;
    int i;
    if((fp = fopen("catalog2", "wb")) == NULL)
    {
        printf("Cannot open file\n");
        return;
    }
    //write the number of data
    if(fwrite(&top, sizeof(top), 1, fp) != 1)
    {
        printf("Error writing to file\n");
        exit(1);
    }
    //write the data( only actually holding data)
    for(i=0; i<=top; i++)
    {
        if(fwrite(&cat[i], sizeof(struct catalog), 1, fp) != 1)
        {
            printf("Error writing to file\n");
            exit(1);
        }
    }
    fclose(fp);
}
void load()
{
    FILE *fp;
    int i;
    if((fp = fopen("catalog2", "rb")) == NULL)
    {
        printf("Catalog file not on the disk.\n");
        return;
    }
    //read the number of data
    if(fread(&top, sizeof(top), 1, fp) != 1)
    {
        printf("Error reading from file\n");
        exit(1);
    }
    //read the data( only actually holding data)
    for(i=0; i<=top; i++)
    {
        if(fread(&cat[i], sizeof(struct catalog), 1, fp) != 1)
        {
            printf("Error reading from file\n");
            exit(1);
        }
    }
    
    fclose(fp);
}