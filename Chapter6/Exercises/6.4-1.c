#include<stdio.h>

int main()
{
    char *p1="one",*p2="two",*p3="three";
    printf("%s %s %s\n",p1,p2,p3);
    printf("%s %s %s\n",p1,p3,p2);
    printf("%s %s %s\n",p2,p1,p3);
    printf("%s %s %s\n",p2,p3,p1);
    printf("%s %s %s\n",p3,p2,p1);
    printf("%s %s %s\n",p3,p1,p2); 
    return 0;
}