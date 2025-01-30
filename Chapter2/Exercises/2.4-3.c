#include<stdio.h>

int main()
{
    int i, num, factor; 
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<=num/2; i=i+1)
    {
        if(num%i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}