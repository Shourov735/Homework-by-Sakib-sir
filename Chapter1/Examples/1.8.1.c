#include<stdio.h>
int get_sqr();
int main()
{
    int sqr;
    sqr = get_sqr();
    printf("Square of the number is %d", sqr);
    return 0;
}
int get_sqr()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num*num;
}