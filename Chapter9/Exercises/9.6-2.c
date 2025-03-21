// finding a value in file
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned char ch, value;
    //see if the number of arguments is correct
    if(argc!=3)
    {
        printf("Usage: find <file> <value>\n");
        exit(1);
    }
    //open file in read mode
    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    value = atoi(argv[2]);
    //find the value in the file
    while(!feof(fp))
    {   
        ch=fgetc(fp);
        if(ch==value)
        {
            printf("Value found at %ld.\n",ftell(fp)-1);
            break;
        }
    }
    //close the file   
    fclose(fp);
    return 0;
}