#include<stdio.h>

int main()
{
    int i,count[10];
    for( i=0;i<20;i++)
    {
        count[i]=i; 
        printf("%d ",count[i]);
    }
    return 0;
}