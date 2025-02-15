#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a letter:\n");
    ch=getche();
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf(" is a vowel");
        break;
    default:
        printf(" is a consonent");
        break;
    }
    return 0;
}