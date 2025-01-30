#include<stdio.h>

int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    } 
    return 0;
}