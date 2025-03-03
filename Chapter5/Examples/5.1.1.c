#include<stdio.h>

int main()
{
    int temp[31] ,min=200, max=-40, sum=0 ,days, i;
    printf("How many days in a month? "); 
    scanf("%d",&days);
    for(i=0;i<days;i++)
    {
        printf("Enter noonday temperature of day %d ",i+1);
        scanf("%d",&temp[i]);
        sum=sum+temp[i];
        if(min>temp[i])min=temp[i];
        if(max<temp[i])max=temp[i];
    }
    printf("Average temperature: %f \n",(float)sum/days);
    printf("Minimum temperature: %d \n",min);
    printf("Maximum temperature: %d \n",max);
    return 0;
}