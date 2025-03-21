#include<stdio.h>
#include<string.h>

struct s_type
{
    char str[100];
} var;
void f(struct s_type p);
int main()
{
    strcpy(var.str, "This is original string");
    f(var);
    printf("%s\n", var.str);
    return 0;
}
void f(struct s_type p)
{
    strcpy(p.str, "This is new string");
    printf("%s\n", p.str);
}