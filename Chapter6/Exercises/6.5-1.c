#include<stdio.h>
#include<string.h>

int main()
{
    char *p[3]={"Yes","No","Maybe.Rephrase the question"};
    char str[100];
    printf("Enter your question: ");
    gets(str);
    int len=strlen(str);
    printf("%s\n",p[len%3]);
    return 0;
}