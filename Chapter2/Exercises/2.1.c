#include<stdio.h>

int main()
{
    int num;
    for(int i=1;i<=10;i++)
    {   
        printf("Attempt %d\n",i);
        printf("Guess the magic number: ");
        scanf("%d",&num);
        if(num==6)
        {
            printf("RIGHT!\n");
            printf("You guessed it in %d attempts\n",i);
            return 0;
        }
        else if(num>6)
        {
            printf("Your guess is higher than the magic number\n");
        }
        else
        {
            printf("Your guess is lower than the magic number \n");
        }
    }
    return 0;
}