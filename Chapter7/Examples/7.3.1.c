#include<stdio.h>

void prompt(char *msg, int *num);
int main()
{
    int i;
    prompt("Enter a number: ", &i);
    printf("Your number is :%d",i);
    return 0;
}
void prompt(char *msg, int *num)
{
    printf(msg);
    scanf("%d",num);
}
