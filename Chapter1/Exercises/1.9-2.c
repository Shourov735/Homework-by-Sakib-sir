#include<stdio.h>
void outnum(int num);
int main()
{   
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    outnum(num);

    return 0;
}
void outnum(int num)
{
    printf("%d", num);
    return;
}