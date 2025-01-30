#include<stdio.h>

int main()
{
    float num;
    int choice;
    printf("Enter a number: "); 
    scanf("%f", &num);
    printf("Enter 1 to convert feet to meters, 2 to convert meters to feet: ");
    scanf("%d", &choice);
    if(choice == 1)
    printf("%f feet is %f meters\n", num, num/3.28);
    if(choice == 2)
    printf("%f meters is %f feet\n", num, num*3.28);
    return 0;
}