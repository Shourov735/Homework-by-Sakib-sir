#include<stdio.h>
#include<math.h>

int main()
{
    double i;
    for(i=1.0;i<=100.0;i++)
    {
        printf("The square root of %lf is %lf\n",i,sqrt(i));
        printf("Whole number part:%d ",(int)sqrt(i));
        printf("Fractional part:%lf\n",sqrt(i)-(int)sqrt(i));
        
    }
    return 0;
}