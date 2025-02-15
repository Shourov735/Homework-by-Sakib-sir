#include<stdio.h>

int main()
{
    int answer,count,chances,right;
    for(count = 1; count < 11; count++)
    {
        printf("What is %d + %d?\n", count, count);
        scanf("%d", &answer);
        if(answer == count + count)
        {
            printf("Right!\n");
        }
        else
        {
            printf("Sorry, you're wrong.\n");
            printf("Try again.\n");
            right=0;
            for(chances = 1; chances < 4 && !right; chances++)
            {   
                printf("What is %d + %d?\n", count, count);
                scanf("%d", &answer);
                if(answer == count + count)
                {
                    printf("Right!\n");
                    right=1;
                }
                else
                {
                    printf("Sorry, you're still wrong.\n");
                    printf("Try again.\n");
                }
            }
            if(!right)
            {
                printf("The answer is %d.\n", count + count);
            }
        }
    }
    return 0;
}