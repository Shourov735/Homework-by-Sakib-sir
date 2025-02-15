#include<stdio.h>

int main()
{
    int i,j; 
    for(i=0;i<5;i++)
    {
        for(j=0;j<100;j++)
        {
            printf("%d",j); 
            if(j==5) break;
            
        }
        printf("\n");
    }
    return 0;
}