#include<stdio.h>

int main()
{
    float e,j;
    /*Input earth year*/
    printf("Enter the number of Earth days: ");
    scanf("%f",&e);
    /*Now compute Jovian years*/
    j=365*e;
    /*Display the answer*/
    printf("Equivalent Jovian years: %f",j);
    return 0;
}