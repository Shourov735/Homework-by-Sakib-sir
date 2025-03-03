#include<stdio.h>

int main()
{
    int array[][3]={
        1,1,1,
        2,4,8,
        3,9,27,
        4,16,64,
        5,25,125,
        6,36,216,
        7,49,343,
        8,64,512,
        9,81,729,
        10,100,1000
    };
    int cube,i;
    printf("Enter cube of the number(1-10): ");
    scanf("%d",&cube);
    for(i=0;i<10;i++)
    {
        
        if(cube==array[i][2])
        {
            printf("Number is %d and it's square is %d.",array[i][0],array[i][1]);
        }
        
    }
    if(i==10) printf("Invalid ");
    return 0;
}