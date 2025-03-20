#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    for(i=0; i<1000; i++)
    {
        printf("%10d %10d %10d\n", rand(), rand(), rand());
    } 
    return 0;
}