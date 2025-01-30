#include<stdio.h>

int main()
{
    float weight; 
    printf("Enter your weight in Earth: ");
    scanf("%f", &weight);
    printf("Your weight in Moon is %f", weight*0.17);
    return 0;
}