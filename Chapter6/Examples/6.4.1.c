#include<stdio.h>
#include<string.h>

int main()
{
    char *p="stop";
    char str[100];
    do
    {
        printf("Enter a string: ");
        gets(str);
    } while (strcmp(p,str));
    
    return 0;
}