#include<stdio.h>

int main()
{
    char *cp,ch;
    int *ip,i;
    float *fp,f;
    double *dp,d;
    cp=&ch;
    ip=&i;
    fp=&f;
    dp=&d;

    printf("%p %p %p %p\n",cp,ip,fp,dp);
    //printf("%p %p %p %p\n",&ch,&i,&f,&d);
    /*these two are wrong
    printf("%p %p %p %p\n",ch,i,f,d);
    printf("%p %p %p %p\n\n",*cp,*ip,*fp,*dp);
    */
    cp++;
    ip++;
    fp++;
    dp++;

    printf("%p %p %p %p\n",cp,ip,fp,dp);
    //printf("%p %p %p %p\n",&ch,&i,&f,&d);
    /*these two are wrong
    printf("%p %p %p %p\n",ch,i,f,d);
    printf("%p %p %p %p\n\n",*cp,*ip,*fp,*dp);
    *//*
    *cp++;      //*cp++; is equivalent to *cp;  cp++;
    *ip++;
    *fp++;
    *dp++;
                
    printf("%p %p %p %p\n",cp,ip,fp,dp);
    printf("%p %p %p %p\n",&ch,&i,&f,&d);
    printf("%p %p %p %p\n",ch,i,f,d); //wrong
    printf("%p %p %p %p\n",*cp,*ip,*fp,*dp);  //wrong
    */

    return 0;
}