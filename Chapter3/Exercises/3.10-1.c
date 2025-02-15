#include<stdio.h>

int main()
{
    int i=1,sum=0;
    again:
        sum=sum+i;
        i++; 
    if(i<=10)
        goto again;
    printf("Sum: %d\n", sum);
    return 0;
}