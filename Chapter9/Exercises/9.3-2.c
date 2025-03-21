//Exchange two files using a temporary file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    char ch;
    if(argc!=3)
    {
        printf("Usage: exchange <file1> <file2>\n");
        exit(1);
    }
    //open first file in read mode
    if((fp1=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    //open second file in read mode
    if((fp2=fopen(argv[2],"r"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    //open temporary file in write mode
    if((fp3=fopen("temp","w"))==NULL)
    {
        printf("Cannot open temporary file.\n");
        exit(1);
    }
    //copy the contents of first file to temporary file
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp3);
    //open first file in write mode
    if((fp1=fopen(argv[1],"w"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    //copy the contents of second file to first file
    while((ch=fgetc(fp2))!=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp2);
    //open second file in write mode
    if((fp2=fopen(argv[2],"w"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    //open temporary file in read mode
    if((fp3=fopen("temp","r"))==NULL)
    {
        printf("Cannot open temporary file.\n");
        exit(1);
    }
    //copy the contents of temporary file to second file
    while((ch=fgetc(fp3))!=EOF)
    {
        fputc(ch,fp2);
    }
    //close the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}