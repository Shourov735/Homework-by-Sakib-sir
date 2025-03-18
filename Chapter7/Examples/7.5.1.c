#include<stdio.h>

int area(int l, int w);
int main()
{
    printf("Area is %d",area(10,13));
    return 0;
}
int area(l,w)
int l, w;
{
    return l*w;
}