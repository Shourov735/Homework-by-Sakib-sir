#include<stdio.h>
#include<string.h>

int main()
{
    char words[][2][40]={
        "dog","কূকূুর",
        "no","negative",
        "year","365 days",
        "child","kid",
        "I","me",
        "drive","চালান",
        "house","home",
        "to","2",
        "",""
    };
    char english[80];
    int i=0;
    printf("Enter English word: ");
    gets(english);
    while(strcmp(words[i][0],""))
    {
        if(!strcmp(english,words[i][0]))
        {
            printf("Meaning : %s",words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0],""))
    {
        printf("Not in dictionary");
    }
    return 0;
}