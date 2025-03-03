// Hangman game
#include<stdio.h>
#include<conio.h>

void display(char c1,char c2,char c3,char c4,char c5,char c6,char c7,char c8,char c9,char c10,char c11,char c12,char c13);
int  count=0;
int main()
{   
    char c1='-', c2='-', c3='-', c4='-', c5='-', c6='-', c7='-', c8='-', c9='-', c10='-', c11='-', c12='-', c13='-';
    char input;
    int c=0,o=0,n=0,a=0,t=0;
    
    printf("Hangman game\n\t -made by Shourov\n");
    do{
        display(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13);
        if(  c1=='c' &&  c2=='o' &&  c3=='n' &&  c4=='c' &&  c5=='a' &&  c6=='t' &&  c7=='e' 
            &&  c8=='n' &&  c9=='a' &&  c10=='t' &&  c11=='i' &&  c12=='o' &&  c13=='n' )
        {   
            printf("\nCongratulations! You won the game.");
            return 0;
        }


        input=getche();

        if(input=='c'){   c++;    if(c==1){c1=input;}    if(c==2){c4=input;}  }
        if(input=='o'){   o++;    if(o==1){c2=input;}    if(o==2){c12=input;} }
        if(input=='n'){   n++;    if(n==1){c3=input;}    if(n==2){c8=input;}   if(n==3){c13=input;} }
        if(input=='a'){   a++;    if(a==1){c5=input;}    if(a==2){c9=input;}  }
        if(input=='t'){   t++;    if(t==1){c6=input;}    if(t==2){c10=input;} }
        if(input=='e'){   c7=input;  }
        if(input=='i'){   c11=input; }
        

        count++;

    }while(count<30);
    printf("You lose");
    return 0;
}
void display(char c1,char c2,char c3,char c4,char c5,char c6,char c7,char c8,char c9,char c10,char c11,char c12,char c13)
{
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c\n",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13);
    
    printf("chances left:%d \n",30-count);
}