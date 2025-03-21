#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch,watch;
    if(argc<3)
    {
        printf("Usage: copy <source> <destination> <watch(optional)>\n");
        exit(1);
    }
    //open source file in read mode
    if((fp1=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    //open destination file in write mode
    if((fp2=fopen(argv[2],"w"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    //check if watch is enabled
    if(argc==4 && !strcmp(argv[3],"watch")) watch=1;
    else{ watch=0;}
    
    //copy the contents of source file to destination file
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
        if(watch)putchar(ch);
    }
    //close the files
    fclose(fp1);
    fclose(fp2);
    return 0;
}