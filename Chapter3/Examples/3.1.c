#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter characters,tab,newline,backspace:\n");
    do{
        ch=getch();
        switch(ch)
        {
            case '\t': printf("tab\n");
            case '\n': printf("newline\n");
            case '\b': printf("backspace\n");
        }
    }while(ch!='q');
    return 0;
}