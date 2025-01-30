#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++) 
    {
        printf("%d\t",i);
        if(i%5==0)printf("\n\n");
    }
    return 0;
}