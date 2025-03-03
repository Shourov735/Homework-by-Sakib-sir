#include<stdio.h>

int main()
{
    float *fp,**mfp,val;
    fp=&val;
    mfp=&fp;
    **mfp=123.903;
    printf("%f %f\n",val,**mfp); 
    return 0;
}