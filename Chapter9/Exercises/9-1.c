// Display contents of a text file line by line
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[100];
    if(argc!=2)
    {
        printf("File name missing\n");
        exit(1);
    }
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(str, sizeof(str), fp);
        if(!feof(fp))
        {
            printf("%s", str);
        }
        printf("...more?(y/n): ");
        if(tolower(getchar()) == 'n') break;
        printf("\n");
    }
    fclose(fp);
    return 0;
}