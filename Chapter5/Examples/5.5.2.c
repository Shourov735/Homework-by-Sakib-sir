#include<stdio.h>
#include<string.h>

int main()
{
    char words[][2][40]={
        "dog","Hund",
        "no","nein",
        "year","Jahr",
        "child","kind",
        "I","Ich",
        "drive","fahren",
        "house","Haus",
        "to","zu",
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
            printf("German translation: %s",words[i][1]);
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