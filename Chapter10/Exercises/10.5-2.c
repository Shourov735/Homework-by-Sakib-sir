#include<stdio.h>

int main()
{
    union u_type
    {
        long l;
        int i;
    } var;
    var.l=0L;
    var.i=155054540;
    printf("%ld",var.l);
    
    return 0;
}