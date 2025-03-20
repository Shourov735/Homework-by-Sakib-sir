#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    do
    {
        ch=getch();
        printf("%d ",ch);
    }while(ch!='\r');
    return 0;
}