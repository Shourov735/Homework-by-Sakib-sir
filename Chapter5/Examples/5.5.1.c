#include<stdio.h>

int main()
{
    char text[10][80];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter string no %d: ",i+1);
        gets(text[i]);
    } 
    do
    {
        printf("Enter number of string(1-10): ");
        scanf("%d",&i);
        if(i>=1&&i<=10)printf("%s\n",text[i-1]);
    }while(i>=0);
    
    return 0;
}