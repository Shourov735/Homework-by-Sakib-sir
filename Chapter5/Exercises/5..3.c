#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i,comma=0,space=0,period=0;
    for(i=0;i<strlen(str);i++)
    {
        switch (str[i])
        {
        case ',': 
            comma++;
            break;
        case ' ': 
            space++;
            break;
        case '.': 
            period++;
            break;
        default:
            break;
        }
    }
    printf("Comma=%d space=%d period=%d ",comma,space,period);
    return 0;
}