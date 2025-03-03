#include<stdio.h>

int main()
{
    char str[70],*p;
    printf("Enter a string: ");
    gets(str);
    p=str;
    while(*p && *p!=' ') p++;

    printf(p);
    return 0;
}