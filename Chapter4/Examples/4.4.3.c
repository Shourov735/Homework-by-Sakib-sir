#include<stdio.h>
void f1();

int main()
{
    f1();
    f1();
    f1();

    return 0;
}
void f1()
{
    int i=10;
    printf("%d ",i);
}