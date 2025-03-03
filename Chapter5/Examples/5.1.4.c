#include<stdio.h>

int main()
{
    int item[100];
    int a,b,t,count;
    printf("How many numbers? ");
    scanf("%d",&count);
    for(a=0;a<count;a++)
    {
        scanf("%d",&item[a]);
    }
    // bubble sort
    for(a=0;a<count;a++)
    {
        for(b=count-1;b>a;b--)
        {
            if(item[b-1]>item[b])
            {
                t=item[b];
                item[b]=item[b-1];
                item[b-1]=t;
            }
        }
    }
    //displaying sorted list
    for(t=0;t<count;t++)
    {
        printf("%d ",item[t]);
    }
    return 0;
}