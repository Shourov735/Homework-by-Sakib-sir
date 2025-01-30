#include<stdio.h>
int xor(int a, int b)
{
    return (a && !b) || (!a && b);
}
int main()
{
    int  p,q;
    printf("Enter p:(0 or 1) ");
    scanf("%d", &p);
    printf("Enter q:(0 or 1) ");
    scanf("%d", &q);
    printf("p AND q is %d\n", p && q);
    printf("p OR q is %d\n", p || q);
    printf("p XOR q is %d\n", xor(p,q));

    return 0;           
}
