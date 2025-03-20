#include<stdio.h>

int main()
{
    char name[100], birth[30], telephone[30];
    printf("Enter your First name, Birth date(mm/dd/yy), and telephone number: ");
    scanf("%s%s%s",name, birth, telephone);
    printf("%s %s %s",name, birth, telephone); 
    return 0;
}