//counting number of bytes in a file
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned count;
    //see if the number of arguments is correct
    if(argc!=2)
    {
        printf("File name missing\n");
        printf("Usage: count <file>\n");
        exit(1);
    }
    //open file in read mode
    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //count the number of bytes in the file
    count=0;
    while(!feof(fp))
    {   
        fgetc(fp);
        if(ferror(fp))
        {
            printf("Error reading file.\n");
            exit(1);
        }
        count++;
    }
    //close the file
    fclose(fp);

    printf("Number of bytes in %s: %u\n",argv[1],count-1);
    return 0;
}