/*Write a C program to find the sum of the digits of a given number using a loop.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void)
{
    int number, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    while(true)
    {
        if (number < 1)
        {
            break;
        }

        sum = (number % 10) + sum;
        number = number / 10;
    }
    printf("sum of the digits of a given number is %d", sum);
}