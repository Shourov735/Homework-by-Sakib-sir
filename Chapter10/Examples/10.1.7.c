#include<stdio.h>
struct s_type
{
    int i;
    double d;
    
} ;
void f(struct s_type var2);
int main()
{
    struct s_type var1;
    var1.i=100;
    var1.d=123.14;
    f(var1);
    return 0;
}
void f(struct s_type var2)
{
    printf("%d %lf\n", var2.i, var2.d);
}