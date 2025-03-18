#include<stdio.h>

double myfunc(double num);
int main()
{   
    printf("%f", myfunc(10.2)); 
    return 0;
}
double myfunc(double num)
{
    return num/2;
}