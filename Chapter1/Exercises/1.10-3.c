#include<stdio.h>
float o_to_c(float o);
int main()
{
    float  o;
    printf("Enter ounces: ");
    scanf("%f", &o);
    printf("Ounces to cup: %f", o_to_c(o));
    return 0;
}
float o_to_c(float o)
{
    return o/8;
}