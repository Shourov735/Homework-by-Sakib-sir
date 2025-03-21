#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int i;//it can also be char

    if ((fp = fopen("myfile", "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    p = str;
    while (*p)
    {
        if (fputc(*p, fp) == EOF)
        {
            printf("Error writing file.\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if ((fp = fopen("myfile", "r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    while ((i = fgetc(fp)) != EOF)
    {
        putchar(i);
    }
    fclose(fp);

    return 0;
}