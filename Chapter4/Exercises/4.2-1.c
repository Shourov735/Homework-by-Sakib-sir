#include<stdio.h>

int soundspeed1();
int soundspeed2(int distance);
int  distance;
int main()
{
    printf("Enter the distance of sound(in feet):");
    scanf("%d",&distance);
    printf("Sound will take %d seconds to travel the distance.\n",soundspeed1());
    printf("Sound will take %d seconds to travel the distance.\n",soundspeed2(distance));
    printf("Sound will take %d seconds to travel the 2258 feet.\n",soundspeed2(2258));
    return 0;
}
/*soundspeed() as a non-general function*/
int soundspeed1()
{
    int t;
    t=distance/1129;
    return t;
}
/*soundspeed() as a parameterized function*/
int soundspeed2(int distance)
{
    return distance/1129;
}