#include<stdio.h>

void f(char c);
int main()
{
    //f('Z');
    f('A');
    return 0;
}
void f(char c)
{
    //if(c>'A') f(c-1);
    printf("%c ",c);
    if(c<'Z') f(c+1);
}