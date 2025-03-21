#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    if(argc!=2)
    {
        printf("File name missing\n");
        exit(1);
    }
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }   
    fclose(fp);
    return 0;
}