#include<stdio.h>
void func();
int main()
{
    func(); 
    return 0;
}
void func()
{
    printf("This is printed");
    return;
    printf("This is not printed");
}