#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter your message: ");
    ch=getche();
    while(ch!='\r')
    {
        printf("%c", ch+1);
        ch=getche();
    }
    return 0;
}