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
        if(remove(filename)==0)
            printf("%s has been deleted.\n", filename);
        else
            printf("Cannot delete %s.\nYou are tring to delete a nonexistent file\n", filename);
    }
    return 0;
}