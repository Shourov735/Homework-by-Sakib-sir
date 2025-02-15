#include<stdio.h>

int main()
{
    int gallons , liters, number;
    printf("How many times you want to convert gallons to liters: ");
    scanf("%d", &number);
    int i=0;
    do{
        printf("Enter the number of gallons: ");
        scanf("%d", &gallons);
        liters = gallons*3.7854;
        printf("The number of liters in %d gallons is: %d\n", gallons, liters);
        i++;
        }while(i<number);
    return 0;
}