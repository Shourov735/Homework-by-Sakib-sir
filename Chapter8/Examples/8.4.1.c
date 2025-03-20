#include<stdio.h>

int main()
{
    char *p, str[100];
    printf("Enter a string: ");
    p = gets(str);
    if(p)// if not null
    {
        printf("%s %s", p, str);
    } 
    return 0;
}