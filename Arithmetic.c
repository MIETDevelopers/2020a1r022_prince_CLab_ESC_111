  
//Author:prince sadotra
//Purpose:Arithmetic operations using addition, subtraction, multiplication and remainder operator

#include <stdio.h> //Pre-Process directive to include input output header file.
int main() { //Main function body starting..

    char operator; // declaring variable name operator of char data type.
    double first, second; //declaring two variables name first,second of double data type.
    
    printf("Enter an operator (+, -, *, /): ");
    // Taking Arithmetic Operators as a input from the user.
    scanf("%c", &operator); 

    printf("Enter two operands: ");
    // Taking two operands as a input from the user of double data type.
    scanf("%lf %lf", &first, &second);

    //using switch case for arithmetic operators so that user can do operations as per their need.
    switch (operator) { 
        // Addition of two numbers.
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
        //Subtraction of two numbers.
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
        //Multiplication of two number.
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
        //Dvision of two numbers.
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant.
    default:
        printf("\nError! operator is not correct");
    }

    return 0;   //return statement
}