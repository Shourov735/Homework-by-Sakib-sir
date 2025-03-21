#include<stdio.h>
#include<stdlib.h>

struct bit_field
{
    unsigned a : 3;
    unsigned b : 3;
    unsigned c : 2;
}x;

int main()
{
    x.a=7;
    x.b=5;
    x.c=3;
    printf("x.a,x.c,x.b = %d %d %d",x.a,x.c,x.b);
    return 0;
}