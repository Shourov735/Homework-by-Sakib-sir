#include<stdio.h>

int main()
{
    int num=1,array[3][3][3],i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                array[i][j][k]=num;
                num++;
                printf("%d ",array[i][j][k]);
            }
        }
    } 
    return 0;
}