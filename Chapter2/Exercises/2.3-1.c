#include<stdio.h>

int main()
{
    int num1, num2, choice;
    printf("Enter 1 to add, 2 to subtract: ");
    scanf("%d", &choice);
    printf("Enter two numbers: "); 
    scanf("%d %d", &num1, &num2);
    if(choice == 1)
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    if(choice == 2)
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    return 0;
}