#include<stdio.h>

#define MAX 100
#define COUNTBY 3
int main()
{
    for(int i=0; i<MAX ;i+=COUNTBY)
    {
        printf("%d ", i);
    }
    return 0;
}