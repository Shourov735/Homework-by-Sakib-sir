#include<stdio.h>
#include<string.h>

int main()
{
    char *p[][2]={
        "Red Delicious","red",
        "Golden Delicious","yellow",
        "Winesap","red",
        "Gala","reddish orange",
        "lodi","green",
        "Mutzu","yellow",
        "Cortland","red",
        "Jonathan","red",
        "", ""
        };
    char apple[80];
    int i;
    printf("Enter an apple name: ");
    gets(apple);
    for(i=0;*p[i][0];i++)
    {
        if(!strcmp(apple,p[i][0]))
        {
            printf("The color of %s is %s\n",apple,p[i][1]);
            break;
        }
    }
    return 0;
}