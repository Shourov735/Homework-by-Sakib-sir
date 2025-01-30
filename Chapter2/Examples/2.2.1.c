#include<stdio.h>

int main()
{
    int num;
    printf("Enter a integer number: "); 
    scanf("%d", &num);
    if(num<0)
    printf("The number is negative\n");
    else
    printf("The number is non negative\n");
    
    return 0;
}