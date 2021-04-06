#include<stdio.h>

int main()
{
    int i, max_index;
    float arr[5], max;

    printf("Please enter five numbers:\n ");

    for (i = 0; i < 5; ++i)
{

    scanf("%f", &arr[i]);
}
    max  = arr[0];
    for (i = 0; i < 5; i++)
{
    if (arr[i] > max) {
        max = arr[i];
        max_index = i;
    }
}
    printf("Largest element = %.2f at index %d", max, max_index);

return 0;
}
