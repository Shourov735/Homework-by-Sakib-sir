#include<stdio.h>
int series();
int number=21;

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d ",series());
    }
    return 0;
}
int series()
{
    number=(number*1468)%467;
    return number;
}