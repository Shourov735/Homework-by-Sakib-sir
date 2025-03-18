#include<stdio.h>

void prompt(char *msg, char *str);
int main()
{
    char *p;
    prompt("Enter a message: ", p);
    printf("Your message is :%s",p);
    return 0;
}
void prompt(char *msg, char *str)
{
    printf(msg);
    gets(str);
}
