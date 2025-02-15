#include<stdio.h>

int main()
{
    float i;
    char ch;
    printf("Tip computer\n");
    for(i=1;i<=100;i++) 
    {
        printf("%f %f %f %f\n",i,i+i*.1,i+i*.15,i+i*.2);
        printf("Do you want to continue\n");
        ch=getchar();
        if(ch=='n'||ch=='N') break;
    }
    return 0;
}