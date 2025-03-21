#include<stdio.h>
struct s_type
{
    int i;
    int j;
    
} s;
int main()
{
    int i;
    i=10;
    s.i=100;
    s.j=200;
    printf("i=%d, s.i=%d, s.j=%d\n", i, s.i, s.j); 
    return 0;
}