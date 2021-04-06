

#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2, distance;
    printf("Enter x1 coordinate : ");
    scanf("%f", &x1);
    printf("Enter y1 coordinate : ");
    scanf("%f", &y1);
    printf("Enter x2 corrdinate : ");
    scanf("%f", &x2);
    printf("Enter y2 coordinate : ");
    scanf("%f", &y2);
    distance = sqrt(pow((x1 - x2), 2)+ pow((y1 - y2), 2));
    printf("The Euclidean distance between the given points is: %f", distance);

    return 0;

}