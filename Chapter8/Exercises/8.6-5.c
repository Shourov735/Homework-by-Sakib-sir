#include<stdio.h>

int main()
{
    int num;
    printf("Enter a hexadecimal number: ");
    scanf("%X", &num);
    printf("It's decimal: %d , octal: %o ", num, num); 
    return 0;
}