#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], backword_str[100];
    printf("Enter a string(less than 100 character):");
    gets(str);
    int i=strlen(str);
    for(int j=0 ;  j<i /* i>=0 */ ;/* i-- */ j++)
    {
        //printf("%c",str[i]);
        backword_str[j]=str[i-j-1];
    }
    backword_str[i]='\0';
    //printf("\n");
    printf(backword_str);
    return 0;
}