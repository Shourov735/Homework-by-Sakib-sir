#include<stdio.h>

int main()
{
    struct b_type
    {
        unsigned first:1;
        int :6;
        unsigned last:1;
    };
    return 0;
}