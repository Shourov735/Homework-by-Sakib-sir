#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{   
    double sum;
    if(argc!=3)
    {
        printf("You must specify 2 numeric arguments\n");
        printf("Try again");
        exit(1);
    }
    sum=atof(argv[1])+atoi(argv[2]);
    printf("Sum=%f",sum);
    return 0;
}