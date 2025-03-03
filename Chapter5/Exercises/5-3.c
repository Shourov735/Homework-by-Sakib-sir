#include<stdio.h>

int main()
{
    int mode,num[20],i,j,count,oldcount=0; 
    printf("Enter 20 numbers: ");
    for(i=0;i<20;i++)
    {
        scanf("%d",&num[i]);                
    }
    for(i=0;i<20;i++)
    {   
        count=1;
        for(j=0;j<20;j++)
        {   
            if(num[i]==num[j])
            {
                count++;
            }                 
        }
        if(count>oldcount)
        {
            oldcount=count;
            mode=num[i];
        }             
    }
    printf("Mode=%d",mode);
    return 0;
}