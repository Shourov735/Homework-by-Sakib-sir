#include<stdio.h>

int main()
{
    char name[9][100];
    double average[9],sum=0.0, max=0.0, min=1000.0;
    int i,pmax,pmin;
    for(i=0;i<9;i++)
    {
        printf("Enter the first name and batting average of player %d: ",i+1);
        scanf("%s %lf", &name[i], &average[i]);
        sum=sum+average[i];
        if(average[i]>max) 
        {
            max=average[i];
            pmax=i;
        }
        if(average[i]<min) 
        {
            min=average[i];
            pmin=i;
        }
    }
    printf("Player with highest average: Name:%s, Average:%lf\n",name[pmax], average[pmax]);
    printf("Player with lowest average: Name:%s, Average:%lf\n",name[pmin], average[pmin]);
    printf("Team average: %lf",sum/9.0);
    return 0;
}