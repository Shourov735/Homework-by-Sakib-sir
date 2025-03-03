#include<stdio.h>
void func(int *p);

int main()
{
    int x;
    func(&x);
    printf("%d\n", x);
    return 0;
}
void func(int *p)
{
    *p=-1;
}