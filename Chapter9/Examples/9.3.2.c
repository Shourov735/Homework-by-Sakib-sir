//compare files
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch1, ch2, same;
    unsigned long l;
    //see if the number of arguments is correct
    if(argc!=3)
    {
        printf("Usage: compare <file1> <file2>\n");
        exit(1);
    }
    //open first file in read mode
    if((fp1=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }
    //open second file in read mode
    if((fp2=fopen(argv[2],"rb"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }
    
    l=0;
    same=1;
    //compare the contents of the files
    while(!feof(fp1) && !feof(fp2))
    {
        ch1=fgetc(fp1);
        if(ferror(fp1))
        {
            printf("Error reading first file.\n");
            exit(1);
        }
        ch2=fgetc(fp2);
        if(ferror(fp2))
        {
            printf("Error reading second file.\n");
            exit(1);
        }

        if(ch1!=ch2)
        {
            same=0;
            printf("Files differ at byte %lu\n",l);
            break;
        }
        l++;
    }
    if(same)
    {
        printf("Files are same\n");
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