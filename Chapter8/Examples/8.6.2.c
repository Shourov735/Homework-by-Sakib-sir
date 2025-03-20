#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter letters,(or anything to stop): ");
    scanf("%[a-zA-z]",str);
    printf(str);
    return 0;
}