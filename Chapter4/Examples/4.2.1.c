#include<stdio.h>
void f1();
int count;

int main()
{
    count=10;
    f1();
    printf("count in main():%d\n",count);

    return 0;
}
void f1()
{   
    int count=100;
    printf("count in f1():%d\n",count);
   
}