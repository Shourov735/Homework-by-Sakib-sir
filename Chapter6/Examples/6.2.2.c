#include<stdio.h>

int main()
{
    int *p,q;
    p=&q;
    q=1;
    
    printf("%p\n",p);
    *p++;// it will not increase the value of q
    // it have to be (*p)++ instead of *p++ ,otherwise it will increase the address of p
    printf("%d %p",q,p);
    return 0;
}