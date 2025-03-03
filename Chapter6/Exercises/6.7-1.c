#include<stdio.h>
void mystrcat(char *to, char *from);

int main()
{
    char str[100] = "this is a ";
    mystrcat(str, "test");
    printf("%s\n", str);
    return 0;
}
void mystrcat(char *to, char *from)
{
    while(*to)
    {
        to++;
    }
    while(*from)
    {
        *to++ = *from++;
    }
    *to = '\0';
}