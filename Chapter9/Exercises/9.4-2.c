// display text file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[100];
    int count = 0;

    // Check if the number of arguments is correct
    if(argc != 2)
    {
        printf("File name missing\n");
        exit(1);
    }

    // Open file in read mode
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Read and display the file content
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        if(ferror(fp))
        {
            printf("Error reading file.\n");
            exit(1);
        }
        printf("%s", str);
        count++;

        if(count == 24)
        {
            printf("Press Enter to continue...");
            while(getchar() != '\n');
            count = 0;
        }
    }

    fclose(fp);
    return 0;
}