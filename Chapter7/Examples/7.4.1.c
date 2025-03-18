#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    double d;
    long l;
    i=atoi(argv[1]);
    d=atof(argv[2]);
    l=atol(argv[3]);
    printf("%d %lf %ld",i,d,l);
    return 0;
}