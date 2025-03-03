#include<stdio.h>

int main()
{
    char *p , **mp , str[70];
    p=str;
    mp=&p;
    printf("Enter your name: "); 
    gets(*mp);
    printf("Hi %s\n",*mp);
    return 0;
}