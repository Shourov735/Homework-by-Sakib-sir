// Copy the contents of a text file to another text file and convert to uppercase
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    // see if the user has entered the correct number of arguments
    if(argc!=3)
    {
        printf("Usage: ./copy_text_file <source> <destination> \n");
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
    
    //copy the contents of source file to destination file
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(toupper(ch),fp2);
        putchar(ch);
    }
    //close the files
    fclose(fp1);
    fclose(fp2);
    return 0;
}