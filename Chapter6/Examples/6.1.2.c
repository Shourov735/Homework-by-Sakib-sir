#include<stdio.h>

int main()
{
    int *p;
    double q,temp;
    temp=1234.34;
    p=&temp;
    q=*p;
    
    printf("%f\n",q);
    return 0;
}