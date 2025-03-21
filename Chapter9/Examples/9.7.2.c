// rewind()
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    //see if the number of arguments is correct
    if(argc!=2)
    {
        printf("Usage: rewind <file>\n");
        exit(1);
    }
    //open file in read mode
    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //show it once
    while(!feof(fp))
        putchar(fgetc(fp));
    //rewind the file
    rewind(fp);
    //show it again
    while(!feof(fp))
        putchar(fgetc(fp));
    //close the file
    fclose(fp);
    return 0;
}