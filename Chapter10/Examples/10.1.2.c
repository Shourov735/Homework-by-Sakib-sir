#include<stdio.h>

struct s_type
{
    int i;
    char ch;
    int *p;
    double d;
    
} s;
int main()
{
    printf("s_type is %lu bytes long\n", sizeof(s)); 
    return 0;
}