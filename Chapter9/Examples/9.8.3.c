#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i;
    printf("Enter a string: ");
    fgets(str, 80, stdin); 
    // remove the newline character, if present
    i = strlen(str)-1;
    if(str[i]=='\n')
    {
        str[i]='\0';
    }
    printf("This is your string: %s\n", str);
    return 0;
}