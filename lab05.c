#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float length, breadth, side, radius, A_circle, A_rect, A_sq, P_circle, P_rect, P_sq;
    printf("\t\t\t Area and Perimeter \n\n");
    // Circle
    printf("\t\t Circle \n");
    printf("Enter the Radius of circle : \n");
    scanf("%f", &radius);
    A_circle = pi * (pow(radius,2));
    P_circle = 2*pi*radius;
    printf(" Area of circle is : %f", A_circle);
    printf("\n Circumference(Perimeter) of circle is: %f", P_circle);
    //Square
    printf("\n\n \t\t Square \n");
    printf("Enter the side of square : \n");
    scanf("%f", &side);
    A_sq= pow(side, 2);
    P_sq = 4 * side;
    printf(" Area of square is : %f", A_sq);
    printf("\n Perimeter of square is : %f", P_sq);
    // Rectangle
    printf("\n\n \t\t Rectangle \n");
    printf("Enter the dimensions of rectangle(length and breadth) : \n");
    scanf("%f %f", &length, &breadth);
    A_rect = length * breadth;
    P_rect = 2 *(length + breadth);
    printf(" Area of rectangle is : %f", A_rect);
    printf("\n Perimeter of rectangle is : %f", P_rect);
    return 0;
}
