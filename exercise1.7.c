/*Write a C program that simulates a simple calculator. It should take two numbers and 
  an operator (+, -, *, /) as input and perform the corresponding operation.*/
#include <stdio.h>
#include <stdbool.h>

// Function prototypes
char operator;
bool isoperator(char operator);

int main(void)
{
    float a, b;
    
    // Input the first number
    printf("Enter first number:");
    scanf("%f", &a);
    
    // Input the second number
    printf("Enter second number");
    scanf("%f", &b);
    
    do
    {
        // Input the operator and validate it
        printf("Enter an operator(+, -, *, /)");
        scanf(" %c", &operator); // Note the space before %c to consume any whitespace characters left in the buffer
        
    } while (!isoperator(operator)); // Loop until a valid operator is entered

    // Perform the operation based on the operator
    switch (operator)
    {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;
    case '-':
        printf("%f - %f = %f", a, b, a - b);
        break;
    case '*':
        printf("%f * %f = %f", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Cannot divide by zero!");
        }
        else
        {
            printf("%f / %f = %f", a, b, a / b);
        }
        break;
    
    default:
        printf("Most probably a BUG!");
        break;
    }
    
    return 0;
}

// Function to check if the given character is a valid operator (+, -, *, /)
bool isoperator(char operator)
{
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {
        return true;
    }
    return false;
}
