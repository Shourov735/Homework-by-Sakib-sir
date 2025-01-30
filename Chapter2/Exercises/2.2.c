#include<stdio.h>

int main()
{
    int rooms,length,width;
    printf("How many rooms are in the house: "); 
    scanf("%d",&rooms);
    printf("What is the lenth and width of each room: ");
    scanf("%d%d",&length,&width);
    printf("The total area of the house is %d\n",length*width*rooms);

    return 0;
}