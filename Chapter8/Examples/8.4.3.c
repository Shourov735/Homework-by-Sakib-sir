#include<stdio.h>

int main()
{
    char *p;
    printf("Enter a string: ");
    p=gets(p);
    if(p)// if not null
    {
        printf("Here is your string: %s", p);
    }   
    return 0;
}