#include<stdio.h>

int main()
{
    int i, *p, **mp;
    p=&i;
    mp=&p;
    //printf("Enter a number: ");
    //scanf("%d", *mp); 
    **mp = 10;
    printf("The number is %d\n", **mp);
    printf("%d  %d  %d\n", i, *p, **mp); 
    //printf("%d  %d  %d\n", &i, p, *mp);  //this is wrong
    printf("%p  %p  %p\n", &i, p, *mp);
    //printf("%p  %p  %p\n", i, *p, **mp); //this is wrong
    return 0;
}