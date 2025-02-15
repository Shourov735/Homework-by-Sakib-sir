#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    ch='a';
    for(int i=0;ch!='q';i++)
    {   
        printf("pass: %d\n", i);
        printf("Enter a character: ");
        ch=getche();
        printf("\n");
    }
    return 0;
}