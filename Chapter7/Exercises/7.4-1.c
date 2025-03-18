#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{   
    int i;
    if(argc!=3)
    {
        printf("You must specify 2 arguments\n");
        printf("Try again");
        exit(1);
    }
    i=strcmp(argv[1],argv[2]);
    if(i<0) printf("%s < %s ",argv[1],argv[2]);
    else if(i>0) printf("%s > %s ",argv[1],argv[2]);
    else printf("Two strings are same.");
    return 0;
}