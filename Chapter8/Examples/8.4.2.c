#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    if(gets(str))// if not null
    {
        printf("Here is your string: %s", str);
    }  
    return 0;
}