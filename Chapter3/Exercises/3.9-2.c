#include<stdio.h>
#include<conio.h>

int main()
{
    int digit=0, punctuation=0, letter=0;
    char ch;
    printf("Enter character: ");
    do{
        ch=getche();
        switch(ch){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digit++;
                break;
            case '.':
            case ',':
            case ';':
            case ':':
            case '?':
            case '!':
                punctuation++;
                break;
            default:
                letter++; 
            
        }
    }while(ch!='\r');
    printf("\nDigits: %d\nPunctuation: %d\nLetters: %d\n", digit, punctuation, letter);
    return 0;
}