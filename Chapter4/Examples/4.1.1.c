#include<stdio.h>

int main()
{
    unsigned u;
    long l;
    short s;
    
    printf("Enter an unsigned: ");
    scanf("%u",&u);
    printf("Enter a long: ");
    scanf("%ld",&l);
    printf("Enter a short: ");
    scanf("%hd",&s);  
    printf("%u %ld %hd\n",u,l,s);
    return 0;
}