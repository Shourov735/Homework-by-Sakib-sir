#include<stdio.h>

int main()
{
    char ch;
    do
    {   
        ch=getchar();
        if(ch==EOF)
        {
            printf("Error taking input");
            break;
        }
        if(putchar('.')==EOF)
        {
            printf("Error giving output");
            break;
        }
    } while (ch!='\n');
     
    return 0;
}