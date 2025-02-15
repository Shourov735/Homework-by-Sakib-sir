#include<stdio.h>

int main()
{
    char ch;
    printf("Enter 10 character: ");
    for(int i=0;i<10;i++)
    {
        scanf("%c",&ch);
        for(int j=0;j<ch;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    } 
    return 0;
}