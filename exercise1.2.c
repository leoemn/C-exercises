/*Write a C program to calculate the factorial of a given number using a recursive function.*/

#include <stdio.h>

int factorial(int n);

int main(void)
{
  int num;

  do
  {
    printf("enter a number: ");
    scanf("%d", &num);
  } while (num < 1); // Repeat until a positive integer is entered

  int answer = factorial(num); // Call the factorial function
  printf("factorial of %d is %d\n", num, answer);
}

int factorial(int n)
{
    if (n == 0) // Base case: factorial of 0 is 1
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1); // Recursive call to calculate factorial
    }

}