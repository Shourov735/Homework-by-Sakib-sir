#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    for(int i=1;i<1000;i++)
    {
        if(!(i%6))
        {
            printf("%d, more? (Y/N)",i);
            ch=getche();
            if(ch=='N' || ch=='n')
            break;
            printf("\n");
        }
    }
    return 0;
}