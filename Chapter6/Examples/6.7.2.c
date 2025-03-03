#include<stdio.h>
void mystrcpy(char *to, char *from);

int main()
{
    char str[100];
    mystrcpy(str, "this is a test");
    printf("%s\n", str);

    return 0;
}
void mystrcpy(char *to, char *from)
{
    while(*from)
    {
        *to++= *from++;
    }
    *to = '\0';
}