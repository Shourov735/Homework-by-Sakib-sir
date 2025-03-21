#include<stdio.h>

struct s_type
{
    int i;
    char ch;
    double d;
} var1, var2;
void struct_swap(struct s_type *i,struct s_type *j);
int main()
{
    var1.i=735;
    var1.ch='S';
    var1.d=89.5;
    var2.i=738;
    var2.ch='s';
    var2.d=69.5;
    printf("Before swap:\n");
    printf("var1: %d %c %f\n",var1.i,var1.ch,var1.d);
    printf("var2: %d %c %f\n",var2.i,var2.ch,var2.d);

    struct_swap(&var1 , &var2);

    printf("After swap:\n");
    printf("var1: %d %c %f\n",var1.i,var1.ch,var1.d);
    printf("var2: %d %c %f\n",var2.i,var2.ch,var2.d);

    return 0;
}
void struct_swap(struct s_type *i,struct s_type *j)
{
    struct s_type temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
