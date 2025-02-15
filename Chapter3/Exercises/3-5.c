#include<stdio.h>

int main()
{
    int i;
    int sum=0;
    //for loop
    for(i=1;i<=10;i++) 
    {   sum=sum+i;
    }
    printf("%d\n",sum);
    //while loop
    i=1;
    sum=0;
    while(i<=10)
    {sum=sum+i;
    i++;}
    printf("%d\n",sum);
    //do while loop
    i=1;
    sum=0;
    do{
        sum=sum+i;
        i++;}while(i<=10);
    printf("%d",sum);
    return 0;
}