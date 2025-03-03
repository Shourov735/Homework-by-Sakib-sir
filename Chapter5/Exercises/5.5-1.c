#include<stdio.h>
#include<conio.h>

int main()
{
    char index, str[10][30]={"I","hate","me","very","much","and","I","hate","this","world"};
    printf("Enter a digit(0-9): ");
    index=getche();
    printf("\n");
    if((index-'0')<0 && (index-'0')>=10 )
    {
        printf("Invalid");
        return 0;
    }
    printf(str[index-'0']);
    return 0;
}