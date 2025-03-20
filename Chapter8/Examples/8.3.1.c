#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{   
    char ch;
    do
    {
        ch=getch();
        printf("%c",toupper(ch));
    } while(ch!='q');
    return 0;
}