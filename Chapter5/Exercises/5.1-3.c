#include<stdio.h>

int main()
{
    float item[100],temp;
    int a,b,t;
    int count;
    printf("How many numbers? ");
    scanf("%d",&count);
    for(a=0;a<count;a++)
    {
        scanf("%f",&item[a]);
    }
    // bubble sort
    for(a=0;a<count;a++)
    {
        for(b=count-1;b>a;b--)
        {
            if(item[b-1]>item[b])
            {
                temp=item[b];
                item[b]=item[b-1];
                item[b-1]=temp;
            }
        }
    }
    //displaying sorted list
    for(t=0;t<count;t++)
    {
        printf("%f ",item[t]);
    }
    return 0;
}