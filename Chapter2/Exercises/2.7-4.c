#include<stdio.h>

int main()
{
    printf("%d\n",!(10==9));
    printf("%d\n",0&&1||1);
    printf("%d",0&&(1||1));
    return 0;
}