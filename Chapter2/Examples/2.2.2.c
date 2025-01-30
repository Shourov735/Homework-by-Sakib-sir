#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num2 == 0)
    printf("Cannot divide by zero\n");
    else
    printf("%d divided by %d is %d\n", num1, num2, num1/num2);
    
    return 0;
}