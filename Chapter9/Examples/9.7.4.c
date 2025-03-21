// rename file
#include<stdio.h>

int main()
{
    if (rename("txt1.txt", "txt2.txt"))
    {
        printf("Error renaming file.\n");
    }
    else
    {
        printf("File renamed successfully.\n");
    }
    return 0;
}