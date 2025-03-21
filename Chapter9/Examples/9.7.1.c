// remove()
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char filename[80];
    printf("Enter the name of the file to be deleted: ");
    gets(filename);
    printf("Are you sure you want to delete %s? (y/n): ", filename);
    if(tolower(getchar())=='y')
    {
        remove(filename);
    }
    return 0;
}