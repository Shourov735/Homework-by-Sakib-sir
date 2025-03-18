#include<stdio.h>

void rcopy(char *a, char *b);
int main()
{
    char str[100];
    rcopy(str , "This is a test"); 
    printf(str);
    return 0;
}
void rcopy(char *a, char *b)
{
    if(*b)
    {
        *a++=*b++;
        rcopy(a,b);
    }
    else *a='\0';
}