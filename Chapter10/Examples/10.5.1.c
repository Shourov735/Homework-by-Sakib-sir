#include<stdio.h>

int encode(int i);
int main()
{
    int i; 
    i=encode(10);
    printf("10 encoded is %d\n",i);
    i=encode(i);
    printf("i decoded is %d\n",i);
    return 0;
}
int encode(int i)
{
    union crypt_type
    {
        int num;
        char c[2];
    } crypt;
    unsigned char ch;
    crypt.num=i;
    ch=crypt.c[0];
    crypt.c[0]=crypt.c[1];
    crypt.c[1]=ch;
    return crypt.num;
}