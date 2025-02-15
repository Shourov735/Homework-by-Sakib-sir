#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    ch=getche();
    while(ch!='q')
    {
        ch=getche();
    }
    printf("\nFound q");
    return 0;
}