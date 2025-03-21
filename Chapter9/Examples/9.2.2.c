// Search specified file for specified character.
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    //see if the number of arguments is correct
    if(argc != 3)
    {
        printf("Usage: find <file name> <ch>\n");
        exit(1);
    }
    //open file
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //search for character
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == *argv[2])
        {
            printf("Found %c in %s\n", *argv[2], argv[1]);
            fclose(fp);
            return 0;
        }
    }
    printf("Did not find %c in %s\n", *argv[2], argv[1]);
    fclose(fp);
    return 0;
}