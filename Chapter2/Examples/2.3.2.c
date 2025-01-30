#include<stdio.h>

int main()
{
    int  ans;
    printf("What is 10+14: ");
    scanf("%d", &ans);
    if (ans == 24)
    {
        printf("Right!\n");
    }
    else
    {
        printf("Sorry you are wrong!\n");
        printf("The answer is 24\n");
    }
return 0;
}   