//******************************************************************************
//***** Written by : Jasmine Williams
//***** Date Written 09/07/2019
//**** Purpose : To demonstrate the ability to add, subtract, and divide numbers in C
//******************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float inputValueOne, inputValueTwo, sum, Product, Result;
    
    printf("Enter the first number: \n");
    scanf("%f", &inputValueOne);
    printf("You entered %f\n", inputValueOne);
    printf("Enter the second number: \n");
    scanf("%f", &inputValueTwo);
    printf("You entered %f\n", inputValueTwo);
    
    sum = inputValueOne + inputValueTwo;
    printf("The sum of %f + %f = %f\n", inputValueOne, inputValueTwo, sum);
    
    Product = inputValueOne * inputValueTwo;
    printf("The product of %f * %f = %f\n", inputValueOne, inputValueTwo, Product);
    
    Result = inputValueOne / inputValueTwo;
    printf("The result of %f / %f = %f\n", inputValueOne, inputValueTwo, Result);
}
