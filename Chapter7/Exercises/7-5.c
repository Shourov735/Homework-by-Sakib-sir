#include<stdio.h>

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        printf("Error taking string\n");
        printf("Try again");
        exit(1);
    }
    while(*argv[1]) 
    {
        printf("%c",(*argv[1])+1);
        argv[1]++;
    }
    return 0;
}