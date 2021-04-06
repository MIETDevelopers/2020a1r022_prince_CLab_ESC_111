#include<stdio.h>

int main()

{
    int n, i, fact=1;
    printf("\t\t\t Factorial of a number \n");
    printf("Enter a number : \n");
    scanf("%d", &n);
    for(i=n; i>0; i--){
        fact = fact * i;
    }
    printf("Factorial of the given number is: %d", fact);
    return 0;
    
}