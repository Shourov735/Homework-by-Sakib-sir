#include<stdio.h>

int main()
{   
    char ch;
    for(ch='A';ch<'Z';ch++) 
    {
        printf("ASCII code for %c is %d\n",ch,ch);
    }
    for(ch='a';ch<'z';ch++) 
    {
        printf("ASCII code for %c is %d\n",ch,ch);
    }
    return 0;
}