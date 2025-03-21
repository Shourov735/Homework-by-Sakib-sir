#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int  count[26];

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;
    //see if the number of arguments is correct
    if(argc != 2)
    {   
        printf("File name missing\n");
        printf("Usage: ./count_ch_in_file <file name>\n");
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
        ch = toupper(ch);
        if(isalpha(ch))
        {
            count[ch - 'A']++;
        }
    }
    for(i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c occurred %d times\n", i + 'A', count[i]);
        }
    }
    fclose(fp);
    return 0;
}