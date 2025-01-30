#include<stdio.h>

int main()
{
    float num;
    int choice;
    printf("Enter 1 to convert feet to meters, 2 to convert meters to feet: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
    printf("Enter number of feet: ");
    scanf("%f", &num);      
    printf("%f feet is %f meters\n", num, num/3.28);
    }
    else
    {
    printf("Enter number of meters: ");
    scanf("%f", &num);
    printf("%f meters is %f feet\n", num, num*3.28);
    }
    return 0;
}