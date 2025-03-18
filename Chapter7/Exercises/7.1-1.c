#include<stdio.h>

float avg();// old style forward declaration
int main()
{
    printf("Average of this 10 number is : %f ",avg());
    return 0;
}
float avg()
{
    float f[10],sum=0.0;
    printf("Enter 10 floating point number: ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&f[i]);
        sum=sum+f[i];
    } 
    
    return sum/10;
}