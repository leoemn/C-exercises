/*Write a C program that takes an integer as input and prints all the prime numbers less than or equal to 
that number.*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int a[num], count = 0;

    // Finding prime numbers less than or equal to the input number
    for (int i = 2; i <= num; i++)
     {

        bool isPrime = true;

        // Checking divisibility from 2 to sqrt(i)
        for (int j = 2; j <= sqrt(i); j++) 
        {
            if (i % j == 0)
            {
                // i is divisible by j, hence not prime
                isPrime = false;
                break;
            }
        }
        // If i is prime, add it to the array a
        if (isPrime) 
        {
            a[count] = i;
            count++;
        }
    }
    
    // Printing the prime numbers
    printf("Prime numbers less than or equal to %d:\n", num);
    for (int i = 0; i < count; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
