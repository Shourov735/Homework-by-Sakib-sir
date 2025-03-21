#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    double ld;
    int d;
    char str[100];
    //see if the number of arguments is correct
    if(argc!=2)
    {
        printf("File name missing\n");
        exit(1);
    }
    //open file in write mode
    if((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    fprintf(fp, "%f %d %s", 12345.6789, 34347, "Hello" );
    fclose(fp);
    //open file in read mode
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    fscanf(fp, "%lf %d %s", &ld, &d, str);
    printf("%f %d %s\n", ld, d, str);
    fclose(fp);
    return 0;
}