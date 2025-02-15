#include<stdio.h>

int main()
{
    char ch;
    printf("Enter uppercase character:\n");
    do{
        ch=getchar();
        printf("%c",ch-32);
    }while(ch!='\n');
    return 0;
}