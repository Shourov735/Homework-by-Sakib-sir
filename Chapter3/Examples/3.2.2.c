#include<stdio.h>

int main()
{
    int answer, count,again;
    for(count=1;count<=10;count++)
    {
        printf("What is %d + %d? ",count,count);
        scanf("%d",&answer);
        if(answer==count+count)
            printf("Right!\n");
        else
        {
            printf("Sorry, you're wrong.\n");
            printf("Try again.\n");
            printf("What is %d + %d? ",count,count);
            scanf("%d",&answer);
            /*nested if*/
            if(answer==count+count)
            printf("Right!\n");
            else
            {
            printf("Sorry, you're wrong.\n");
            printf("The answer is %d\n",count+count);
            }
        }
    } 
    return 0;
}