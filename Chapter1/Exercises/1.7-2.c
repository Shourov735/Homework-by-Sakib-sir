#include <stdio.h>
void func1(void);
void func2(void);
int main()
{
    func2();
    printf("patriot.");
    return 0;
}
void func1(void)
{    
    printf("The summer soldier, ");
}
void func2(void)
{   
    func1();
    printf("the sunshine ");
}
