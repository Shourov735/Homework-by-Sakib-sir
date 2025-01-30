#include<stdio.h>
void func1(void);

int main()
{
    printf("I ");
    func1();
    printf("c");
    return 0;
}
void func1(void)
{
    printf("like ");
}