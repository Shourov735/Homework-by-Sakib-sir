#include<stdio.h>

float avg(float f1 ,float f2 ,float f3 ,float f4 ,float f5 ,float f6 ,float f7 ,float f8 ,float f9 ,float f10 );
int main()
{
    float f[10];
    printf("Enter 10 floating point number: ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&f[i]);
    }
    printf("Average of this 10 number is : %f ",avg(f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7],f[8],f[9]));
    return 0;
}
float avg(float f1 ,float f2 ,float f3 ,float f4 ,float f5 ,float f6 ,float f7 ,float f8 ,float f9 ,float f10 )
{
    float average=(f1+f2+f3+f4+f5+f6+f7+f8+f9+f10)/10;
    return average;
}