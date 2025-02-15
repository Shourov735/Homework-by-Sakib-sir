#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    do{
        ch=getche();
    }while(ch!='q');
    printf("Found the q");
    return 0;
}