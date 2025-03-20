#include<stdio.h>
#include<conio.h>

int main()
{
    double amount;
    amount=0.20;
    printf("Printing a 5-percent tax table\n");
    printf("Press a key to stop.\n\n");
    do
    {
        printf("amount: %f , tax: %f\n\r",amount , amount*0.05);
        if(kbhit()) break;
        amount=amount+0.20;
    } while(amount<100.0);
    return 0;
}