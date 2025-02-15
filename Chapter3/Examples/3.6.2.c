#include<stdio.h>

int main()
{
    int i, j, k;
    for(i=0;i<3;i++) 
        for(j=0;j<26;j++)
            for(k=0;k<2;k++) printf("%c\n", j+'A');
    return 0;
}