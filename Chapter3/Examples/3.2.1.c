#include<stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Do you want to:");
    printf("\nAdd Subtract Multiply Divide?\n"); 
    printf("Enter the first letter: ");
    ch = getchar();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(ch == 'A' || ch == 'a')
        printf("The sum is: %d", a + b);
    else if(ch == 'S' || ch == 's')
        printf("The difference is: %d", a - b);
    else if(ch == 'M' || ch == 'm')
        printf("The product is: %d", a * b);
    else if(ch == 'D' || ch == 'd' && b != 0)
        printf("The quotient is: %d", a / b);
    else
        printf("Invalid input");
    return 0;
}