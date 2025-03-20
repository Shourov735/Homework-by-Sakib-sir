#include<stdio.h>

int main()
{
    int i,num;
    double d;
    char str[100];
    printf("Enter a string, a double, and an integer: ");
    scanf("%s%lf%d%n",str, &d, &i, &num);
    printf("Numbers of characters read: %d ", num);
    return 0;
}