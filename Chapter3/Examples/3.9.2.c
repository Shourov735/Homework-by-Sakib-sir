#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    do{
        printf("\nEnter a character, q to quit: ");
        ch=getche();
        printf("\n");

        switch (ch)
        {
        case  'a':
            printf("Now is ");
        case  'b':
            printf("the time ");
        case  'c':
            printf("for all good men");
            break;
        case  'd':
            printf("The summer ");
        case  'e':
            printf("soldier");
            break;
        }
    }while (ch!='q');
    return 0;
}