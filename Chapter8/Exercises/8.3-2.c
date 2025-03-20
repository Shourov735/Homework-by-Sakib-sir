#include<stdio.h>
#include<conio.h>

int main()
{
    while (!kbhit())
    {
        printf(".");
    }
     
    return 0;
}