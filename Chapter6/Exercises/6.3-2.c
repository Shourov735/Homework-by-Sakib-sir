#include<stdio.h>

int main()
{
    int temp[5]={10,19,23,8,9};
    int *p;
    p=temp;
    printf("%d\n",*(p+3));
    printf("%d",*(temp+3));
     
    return 0;
}