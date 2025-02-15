#include<stdio.h>

int main()
{
    int i,j=1,k;
    for(k=0;k<10;k++) 
    {
        printf("Enter two number(second one should'nt be 0):\n");
        scanf("%d%d",&i,&j);
        if(j==0)printf("Can't devide by zero.\n");
        else printf("%f\n",(float)i/j);
    }
    return 0;
}