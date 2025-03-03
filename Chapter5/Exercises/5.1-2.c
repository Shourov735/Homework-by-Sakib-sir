#include<stdio.h>

int main()
{
    int item[10];
    int a,b;
    printf("Enter 10 numbers: ");
    for(a=0;a<10;a++)
    {
        scanf("%d",&item[a]);
    }
    //matching or not
    for(a=0;a<10;a++)
    {
        for(b=a+1;b<10;b++)
        {
            if(item[a]==item[b])
            {
                printf("Matched");
                return 0;
            }
        }
    }
    printf("Not matched");
    return 0;
}