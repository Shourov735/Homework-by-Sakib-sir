#include<stdio.h>
#include<time.h>

int main()
{
    struct tm *systime;
    time_t t;
    t=time(NULL);
    systime=localtime(&t);
    
    printf("Time is %.2d:%.2d:%.2d", systime->tm_hour, systime->tm_min, systime->tm_sec);
    printf("\nDate is %.2d/%.2d/%d", systime->tm_mday, systime->tm_mon+1, systime->tm_year+1900);
    return 0;
}