#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    //see if the number of arguments is correct
    if(argc!=3)
    {
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }
    //open source file in read mode
    if((fp1=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    //open destination file in write mode
    if((fp2=fopen(argv[2],"wb"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    //copy the contents of source file to destination file
    while(!feof(fp1))
    {   
        ch=fgetc(fp1);
        if(ferror(fp1))
        {
            printf("Error reading source file.\n");
            exit(1);
        }
        if(!feof(fp1))
        {
            fputc(ch,fp2);
            if(ferror(fp2))
            {
                printf("Error writing destination file.\n");
                exit(1);
            }
        }
    }
    //close the files
    if(fclose(fp1)==EOF)
    {
        printf("Error closing source file.\n");
        exit(1);
    }
    if(fclose(fp2)==EOF)
    {
        printf("Error closing destination file.\n");
        exit(1);
    }
    return 0;
}