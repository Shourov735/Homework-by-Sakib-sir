#include<stdio.h>

int main()
{
    unsigned long int distance,time;
    printf("Enter the distance in miles: ");
    scanf("%lu",&distance);
    time=distance/186000;
    printf("Light will take %lu seconds to travel the distance",time);
    return 0;
}