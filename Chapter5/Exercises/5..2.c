#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    int i=0,j,len;
    len = strlen(str);
    for(i=0,j=len-1;i<len/2 || j>len/2;i++,j--)
    {
        
        printf("%c",str[i]);
        printf("%c",str[j]);
    }
    if(len%2==1)printf("%c",str[(len+1)/2]);
    return 0;
}