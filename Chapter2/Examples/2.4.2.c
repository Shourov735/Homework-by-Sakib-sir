#include<stdio.h>

int main()
{
    int num, i, is_prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    is_prime = 1;
    for(i=2; i<=num/2; i=i+1)
    {
        if(num%i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    } 
    return 0;
}