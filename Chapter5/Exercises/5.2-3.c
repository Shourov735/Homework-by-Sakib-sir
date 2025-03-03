#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],bigstr[1000];
    strcpy(bigstr,"");
    for(;strlen(bigstr)<1000;)  
    {   
        printf("Add more string or type quit to finish:");
        gets(str);
        if(!strcmp(str,"quit")) break;
        strcat(bigstr,"\n");
        strcat(bigstr,str);
    }
    printf(bigstr);
    return 0;
}