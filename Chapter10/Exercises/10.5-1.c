#include<stdio.h>
#include<stdlib.h>

union u_type
{
    double d;
    unsigned char c[8];
};
double read(FILE *fp);
void write(double num,FILE *fp);
int main()
{
    FILE *fp;
    double d;
    if((fp=fopen("double_ch8","wb+"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }  
    write(100.123,fp);
    d=read(fp);
    printf("%lf",d);
    return 0;
}
void write(double num,FILE *fp)
{
    int i;
    union u_type var;
    var.d=num;
    for(i=0;i<8;i++)
    {
        fputc(var.c[i],fp);
    }
}
double read(FILE *fp)
{
    int i;
    union u_type var;
    rewind(fp);
    for(i=0;i<8;i++)
    {
        var.c[i]=fgetc(fp);
    }
    return var.d;
}