#include<stdio.h>

int main()
{
    int i,num; 
    printf("testing \\23: \23\a\x13\n");
    printf("Enter\f a number: \a");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++)
    {
        printf("\"%d\" x \"%d\" =\f \"%d\"\b\n%d\v", num, i, num*i,i);
        printf("\t\0 0\?");

    }

    return 0;
}