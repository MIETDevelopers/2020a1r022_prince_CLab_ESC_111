#include<stdio.h>

void swap_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_reference(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;

}
int main()
{
    int a, b;
    
        printf("\t\t\t Swap using pass by value and pass by reference \n");
    printf(" Enter number a : ");
    scanf("%d", &a);
    printf("\n Enter number b : ");
    scanf("%d", &b); 
    printf("\n The numbers before swapping are : ");
    printf("\n a = %d \n b = %d", a, b);
    // passing by value
    printf("\n\n Swapping numbers using pass by value ... \n");
    swap_value(a,b);
    printf("\n The numbers after swapping are : ");
    printf("\n a = %d \n b = %d", a, b);
    // passing by reference
    printf("\n \n Swapping numbers  using pass by reference ... \n");
    swap_reference(&a,&b);
     printf("\n The numbers after swapping are : ");
     printf("\n a = %d \n b = %d", a, b);
     
    return 0;
    
}
