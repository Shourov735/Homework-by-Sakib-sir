#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter letters,(or anything to stop): ");
    scanf("%[a-z A-z]",str);
    printf(str);
    return 0;
}