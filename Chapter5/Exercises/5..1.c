#include<stdio.h>
#include<string.h>

int main()
{
    char str[81];
    printf("Enter a string:\n");
    gets(str);
    int i,len=strlen(str);
    char str_full[80-len];
    for(i=0;i<(80-len);i++)
    {
        str_full[i]='.';
    }
    str_full[i]='\0';
    if(len<80)strcat(str,str_full);
    printf(str);
    return 0;
}