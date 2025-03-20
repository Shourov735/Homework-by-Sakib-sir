#include<stdio.h>

int main()
{
    char ch;
    do
    {
        ch=getchar();
        putchar('.');
    } while (ch!='\n');
     
    return 0;
}