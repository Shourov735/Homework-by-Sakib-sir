// Copy the contents of a file to another file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union u_type
{
    int i;
    char ch;
} uvar;
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
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
    for(;;)
    {
        uvar.i=fgetc(fp1);
        if(uvar.i==EOF) break;
        fputc(uvar.ch,fp2);
    }
    //close the files
    fclose(fp1);
    fclose(fp2);
    return 0;
}