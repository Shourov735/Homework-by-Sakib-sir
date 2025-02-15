#include<stdio.h>

int main()
{
    int i;
    printf("Enter a integer: "); 
    scanf("%d", &i);
    for(;i;i--)
    {
        printf("%d\n", i);
    }
    return 0;
}