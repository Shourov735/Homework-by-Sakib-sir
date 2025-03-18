#include<stdio.h>
#include<ctype.h>

void string_up(char *p);
int main()
{
    char *str;
    printf("Enter a string: ");
    gets(str);
    string_up(str);
    printf(str);
    return 0;
}
void string_up(char *p)
{
    while(*p)
    {
        *p=toupper(*p);
        p++;
    }
}