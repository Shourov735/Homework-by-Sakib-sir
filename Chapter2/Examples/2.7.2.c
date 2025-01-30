#include<stdio.h>

int main()
{
    int i,j;
    printf("Enter first number: "); 
    scanf("%d", &i);
    printf("Enter second number: ");
    scanf("%d", &j);

    /*relatoinal operators*/
    printf("%d > %d is %d\n", i, j, i > j);
    printf("%d < %d is %d\n", i, j, i < j);
    printf("%d >= %d is %d\n", i, j, i >= j);
    printf("%d <= %d is %d\n", i, j, i <= j);
    printf("%d == %d is %d\n", i, j, i == j);
    printf("%d != %d is %d\n", i, j, i != j);
    /*logical operators*/
    printf("%d && %d is %d\n", i, j, i && j);
    printf("%d || %d is %d\n", i, j, i || j);
    printf("!%d and !%d is %d %d\n", i, j, !i, !j);
    return 0;
}