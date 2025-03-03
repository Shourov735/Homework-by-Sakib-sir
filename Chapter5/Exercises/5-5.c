#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter strings(quit to stop): ");
    for(;strcmp(str,"quit");)
    {
        gets(str);
    }
    return 0;
}