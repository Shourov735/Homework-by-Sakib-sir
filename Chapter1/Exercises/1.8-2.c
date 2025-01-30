#include<stdio.h>
int convert();
int main()
{
    int pounds;  
    pounds = convert();
    printf("Pounds: %d", pounds);
    return 0;
}
int convert()
{
    int money;
    printf("Enter money in doller: ");
    scanf("%d", &money);
    return money*2;
}