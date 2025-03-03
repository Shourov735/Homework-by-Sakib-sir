#include<stdio.h>

int main()
{
    int *p,q,i;
    p=&q;
    for(i=0;i<10;i++)
    {
        q=i;
        printf("%d\n",*p);
    }

    return 0;
}