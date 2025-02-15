#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); 
    if(number!=0)
    {
    if(number>0)
        printf("Number is positive\n");
    else
        printf("Number is negative\n");
        
    }
    else 
        printf("Number is zero\n");
    return 0;
}