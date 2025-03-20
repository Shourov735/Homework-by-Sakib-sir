#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter floating point number: ");
    scanf("%[0-9.]",str);
    printf(str);
    return 0;
}