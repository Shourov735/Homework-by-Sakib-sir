#include<stdio.h>

int main()
{
    int is_prime;
    for(int i=2;i<=1000;i++) 
    {
        is_prime = 1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0 )
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}