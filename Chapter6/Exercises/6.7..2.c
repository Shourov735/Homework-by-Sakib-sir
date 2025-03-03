#include<stdio.h>

int main()
{
    char str[80] ,*p;
    int i , spaces;
    printf("Enter a string: ");
    gets(str);
    p=str;
    spaces=0;
    while(*p)
    {
        if(*p==' ') spaces++;
        p++;
    }
    printf("Number of spaces : %d",spaces);
    return 0;
}
