#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[100];

    if(argc!=2)
    {
        printf("File name missing\n");
        exit(1);
    }
    if((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    printf("Enter a blank line to stop.\n");
    do
    {   
        printf(": ");
        gets(str);
        strcat(str, "\n");
        if(*str !='\n')fputs(str, fp);
    }while(*str != '\n');
    fclose(fp);
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    do
    {
        fgets(str, 100, fp);
        if(!feof(fp))printf(str);
    }while(!feof(fp));
    fclose(fp);
    return 0;
}