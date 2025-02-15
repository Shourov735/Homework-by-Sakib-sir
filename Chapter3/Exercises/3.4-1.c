#include<stdio.h>

int main()
{
    int distance, speed, time, number;
    printf("How many times you want to calculate the drive time: ");
    scanf("%d", &number);
    int i=0;
    while (i<number)
    {
        printf("Enter the distance and speed: ");
        scanf("%d %d", &distance, &speed);
        time = distance/speed;
        printf("The time taken to cover the distance is: %d\n", time);
        i++;
    } 
    return 0;
}