// Exchange two files using a temporary file.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    char ch;
    // Check if the number of arguments is correct
    if(argc != 3)
    {
        printf("Usage: exchange <file1> <file2>\n");
        exit(1);
    }

    // Open first file in read-write mode
    if((fp1 = fopen(argv[1], "r+")) == NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // Open second file in read-write mode
    if((fp2 = fopen(argv[2], "r+")) == NULL)
    {
        printf("Cannot open destination file.\n");
        fclose(fp1); // Close the first file before exiting
        exit(1);
    }

    // Open temporary file in read-write mode
    if((fp3 = fopen("temp", "w+")) == NULL)
    {
        printf("Cannot open temporary file.\n");
        fclose(fp1);
        fclose(fp2);
        exit(1);
    }

    // Copy the contents of the first file to the temporary file
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp3);
    }

    // Rewind the first file and the temporary file
    rewind(fp1);
    rewind(fp3);

    // Copy the contents of the second file to the first file
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }

    // Rewind the second file
    rewind(fp2);

    // Copy the contents of the temporary file to the second file
    while((ch = fgetc(fp3)) != EOF)
    {
        fputc(ch, fp2);
    }

    // Close the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    // Remove the temporary file
    remove("temp");

    return 0;
}