#include<stdio.h>

int main()
{
    int i;
    for(i=0 ; i<101; i++) 
    {
        if(i%2==0)continue;
        printf("%d ",i);
    }
    return 0;
}