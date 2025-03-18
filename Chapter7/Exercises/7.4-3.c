#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{   
    double result;
    if(argc!=4)
    {
        printf("You must specify operation and 2 numeric arguments\n");
        printf("Try again");
        exit(1);
    }
    if(!strcmp(argv[1],"add")) result=atof(argv[2])+atoi(argv[3]);
    if(!strcmp(argv[1],"subtract")) result=atof(argv[2])-atoi(argv[3]);
    if(!strcmp(argv[1],"multiply")) result=atof(argv[2])*atoi(argv[3]);
    if(!strcmp(argv[1],"divide")) result=atof(argv[2])/atoi(argv[3]);
    printf("Result= %lf",result);
    return 0;
}