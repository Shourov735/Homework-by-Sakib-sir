#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char command[80],temp[80];
    int i , j;
    for(;;)
    {
        printf("Operation?(add,substract,multiply,divide or quit) ");
        gets(command);

        if(!strcmp(command,"quit")) break;
        
        printf("Enter first number: ");
        gets(temp);
        i=atoi(temp);
        printf("Enter second number: ");
        gets(temp);
        j=atoi(temp);
        if(!strcmp(command,"add")) printf("%d\n",i+j);
        else if(!strcmp(command,"substract")) printf("%d\n",i-j);
        else if(!strcmp(command,"multiply")) printf("%d\n",i*j);
        else if(!strcmp(command,"divide")) printf("%d\n",i/j);
        else printf("Unknown command. \n");
    }
    return 0;
}