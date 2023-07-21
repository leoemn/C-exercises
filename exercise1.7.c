/*Write a C program that simulates a simple calculator. It should take two numbers and 
  an operator (+, -, *, /) as input and perform the corresponding operation.*/
#include <stdio.h>
#include <stdbool.h>

char operator;
bool isoperator(char operator);

int main(void)
{
    float a, b;
    
    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number");
    scanf("%f", &b);
    
    do
    {
        printf("Enter an operator(+, -, *, /)");
        scanf("%c", &operator);
    } while (!isoperator(operator));

    switch (operator)
    {
    case '+':
        printf("%f + %f = %f", a,b,a+b);
        break;
    case '-':
        printf("%f - %f = %f", a,b,a-b);
        break;
    case '*':
        printf("%f * %f = %f", a,b,a*b);
        break;
    case '/':
        printf("%f / %f = %f", a,b,a/b);
        break;
    
    default:
        printf("This is most probably a bug");
        break;
    }
    
}

bool isoperator(char operator)
{
    if(operator == '+' || operator == '-', operator == '*', operator == '/')
    {
        return true;
    }
    return false;
}