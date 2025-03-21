#include<stdio.h>
struct s_type
{
    int i;
    double d;
    
} ;
struct s_type f();
int main()
{
    struct s_type var1;
    var1=f();
    printf("%d %lf\n", var1.i, var1.d);
    return 0;
}
struct s_type f()
{
    struct s_type var2;
    var2.i=100;
    var2.d=123.14;
    return var2;
}