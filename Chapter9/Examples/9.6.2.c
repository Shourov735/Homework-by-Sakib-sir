// copy a file in reverse order
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    long location;
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
    //seek to the end of the source file
    if(fseek(fp1,0,SEEK_END)!=0)
    {
        printf("Error seeking to end of source file.\n");
        exit(1);
    }
    location = ftell(fp1);
    //copy the contents of source file to destination file in reverse order
    location--;
    while(location>=0)
    {
        if(fseek(fp1,location,SEEK_SET)!=0)
        {
            printf("Error seeking to byte.\n");
            exit(1);
        }
        ch = fgetc(fp1);
        if(ferror(fp1))
        {
            printf("Error reading source file.\n");
            exit(1);
        }
        fputc(ch, fp2);
        if(ferror(fp2))
        {
            printf("Error writing destination file.\n");
            exit(1);
        }
        location--;
    }
    //close the files
    fclose(fp1);
    fclose(fp2);
    return 0;
}