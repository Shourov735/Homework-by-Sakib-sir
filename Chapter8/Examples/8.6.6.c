#include<stdio.h>

int main()
{
    int i, j;
    printf("Enter a decimal number: ");
    scanf("%d.%d",&i, &j); 
    printf("Left part: %d, Right part: %d",i , j);
    return 0;
}