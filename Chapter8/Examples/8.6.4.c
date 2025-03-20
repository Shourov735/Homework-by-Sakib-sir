#include<stdio.h>

int main()
{
    int i, j;
    char op;
    printf("Enter operation: ");
    scanf("%d %c%d",&i,&op,&j);
    switch (op)
    {
    case '+':
        printf("%d",i+j);
        break;
    case '-':
        printf("%d",i-j);
        break;
    case '*':
        printf("%d",i*j);
        break;
    case '/':
        if(j) printf("%d",i/j);
        break;
    
    default:
        break;
    } 
    return 0;
}