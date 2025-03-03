#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[80];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i];i++)
    {
        str[i]=toupper(str[i]);
    }
    printf("The string in uppercase: %s\n",str);
    for(i=0;str[i];i++)
    {
        str[i]=tolower(str[i]);
    }
    printf("The string in lowercase: %s\n",str);

    //now by using pointer
    printf("Now Let's do it by using pointer.\n");
    char *p;
    p=str;
    printf("Enter a string: ");
    gets(str);
    while(*p)
    {
        *p=toupper(*p);
        p++;
    }
    printf("The string in uppercase: %s\n",str);
    p=str;
    while(*p)
    {
        *p=tolower(*p);
        p++;
    }
    printf("The string in lowercase: %s\n",str);

    return 0;
}