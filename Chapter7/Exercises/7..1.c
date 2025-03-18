#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        printf("Error taking password\n");
        printf("Try again");
        exit(1);
    }
    if(!strcmp("pknhtyuio",argv[1])) printf("Access Permitted");
    else printf("Access Denied");
    return 0;
}