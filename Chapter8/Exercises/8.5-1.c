#include<stdio.h>

int main()
{
    int i;
    for(i=2; i<=100 ;i++) 
    {
        printf("%-3d %-5d %-7d\n", i, i*i , i*i*i );
    }
    return 0;
}