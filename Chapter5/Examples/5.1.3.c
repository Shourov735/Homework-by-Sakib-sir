#include<stdio.h>
#include<conio.h>
int main()
{
    char message[80]; 
    int i;
    printf("Enter message(less than 80 characters)\n");
    for(i=0; i<80;i++)
    {
        message[i]=getche();
        if(message[i]=='\r')break;
    }
    printf("\n");\
    for(i=0;message[i]!='\r';i++)
    printf("%c",message[i]+1);
    return 0;
}