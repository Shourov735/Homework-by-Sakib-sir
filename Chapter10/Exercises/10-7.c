#include<stdio.h>

int main()
{
    union u_type
    {
        short int i;
        unsigned char c[2];
    } var; 
    printf("Enter a short int:(0 to 255) ");
    scanf("%hd",&var.i);
    printf("High order byte: %u\n",var.c[1]);
    printf("Low order byte: %u\n",var.c[0]);
    return 0;
}