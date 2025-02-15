#include<stdio.h>

int main()
{
    char ch;
    char a='z';
    printf("Enter 10 letters\n");
    for(int i=0;i<10;i++) 
    {
        scanf("%c", &ch);
        if(ch<a)a=ch;
    }
    printf("The earliest letter is: %c", a);
    return 0;
}