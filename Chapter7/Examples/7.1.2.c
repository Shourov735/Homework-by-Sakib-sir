#include<stdio.h>

float getnum(void)
{
    float x;
    printf("Enter a number: ");
    scanf("%f",&x);
    return x;
}
int main()
{
    float f;
    f=getnum();
    printf("%f",f);
    return 0;
}
