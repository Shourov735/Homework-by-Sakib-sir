#include<stdio.h>

int fact(int i);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d.", num, fact(num));
    return 0;
}
int fact(int i)
{   
    if(i==1) return 1;
    else return i*fact(i-1);
}