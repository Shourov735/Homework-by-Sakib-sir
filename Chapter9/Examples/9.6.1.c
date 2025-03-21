#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    long location;
    //see if the number of arguments is correct
    if(argc!=2)
    {
        printf("Usage: seek <file>\n");
        exit(1);
    }
    //open file in read mode
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    printf("Enter byte to seek to: ");
    scanf("%ld",&location);
    //seek to the specified byte
    if(fseek(fp,location,SEEK_SET)!=0)
    {
        printf("Error seeking to byte.\n");
        exit(1);
    }
    //print the byte at the current location
    printf("Value at byte %ld is %c.\n",location,fgetc(fp));
    //close the file   
    fclose(fp);
    return 0;
}