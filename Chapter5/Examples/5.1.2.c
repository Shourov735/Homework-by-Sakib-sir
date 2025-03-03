#include<stdio.h>

int main()
{
    int a1[10],a2[10];
    int i;
    for(i=0;i<10;i++) a1[i]=i+1;

    for(i=0;i<10;i++) a2[i]=a1[i];

    for(i=0;i<10;i++) printf("%d ",a2[i]);
    return 0;
}