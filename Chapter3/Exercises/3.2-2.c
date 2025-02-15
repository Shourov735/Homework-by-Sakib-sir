#include<stdio.h>

int main()
{
    char x;
    printf("Whose area you want to calculate: "); 
    printf("Enter 'c' for circle, 'r' for rectangle and 't' for triangle: ");
    scanf("%c", &x);
    if(x == 'c')
    {
        float r;
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        printf("The area of the circle is: %f\n", 3.14*r*r);
    }
    else if(x == 'r')
    {
        float l, b;
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f %f", &l, &b);
        printf("The area of the rectangle is: %f\n", l*b);
    }
    else if(x == 't')
    {
        float b, h;
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &b, &h);
        printf("The area of the triangle is: %f\n", 0.5*b*h);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}