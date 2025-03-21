#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    long location;
    //see if the number of arguments is correct
    if(argc!=2)
    {
        printf("Usage: display <file>\n");
        exit(1);
    }
    //open file in read mode
    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //seek to the end of the file
    fseek(fp,0,SEEK_END);
    location = ftell(fp);
    //go back to the beginning of the file
    fseek(fp,0,SEEK_SET);
    for(;location>=0;location=location-2)
    {
        ch=fgetc(fp);
        putchar(ch);
        fseek(fp,1,SEEK_CUR);
    }
    //close the file
    fclose(fp);
    return 0;
}