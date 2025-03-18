#include<stdio.h>

int get_a_char(void);
int main()
{
    char ch;
    ch=get_a_char();
    printf("%c",ch);
    return 0;
}
int get_a_char(void)
{
    return 'a';
}