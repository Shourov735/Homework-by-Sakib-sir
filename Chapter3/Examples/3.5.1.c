#include<stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("Do you want to:\n");
    printf("Add(a) or Subtract(s) or Multiply(m) or Divide(d): ");
    do{
        printf("Enter your choice:\n");
    }while(ch!='a' && ch!='s' && ch!='m' && ch!='d');
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(ch=='a')
    {
        printf("The sum of the two numbers is: %d\n", a+b);
    }
    else if(ch=='s')
    {
        printf("The difference of the two numbers is: %d\n", a-b);
    }
    else if(ch=='m')
    {
        printf("The product of the two numbers is: %d\n", a*b);
    }
    else if(ch=='d' && b!=0)
    {
        printf("The division of the two numbers is: %d\n", a/b);
    }
    return 0;
}