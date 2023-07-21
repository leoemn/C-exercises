/*Write a C program that calculates the average, maximum, and minimum of a given array of numbers.*/
#include <stdio.h>

int main(void)
{
    int a[] = {4, 56, 6, 10, 11, 25, 0, -5, -25};
    int length = sizeof(a) / sizeof(a[0]);
    int minimum, maximum, sum = 0;
    float average;

    // Loop through the array to find the minimum, maximum, and calculate the sum
    for (int i = 0; i < length; i++)
    {
        // If it's the first element, initialize both minimum and maximum with its value
        if (i == 0)
        {
            minimum = a[i];
            maximum = a[i];
            continue; // Move to the next iteration to avoid re-checking the conditions below
        }

        // Check if the current element is less than the current minimum and update the minimum if needed
        if (a[i] < minimum)
        {
            minimum = a[i];
        }

        // Check if the current element is greater than the current maximum and update the maximum if needed
        if (a[i] > maximum)
        {
            maximum = a[i];
        }

        // Calculate the sum of all elements in the array
        sum = a[i] + sum;
    }

    // Calculate the average of all elements using the sum and the length of the array
    average = (float)sum / length;

    // Output the minimum, maximum, and average values
    printf("minimum = %d, maximum = %d, average = %f", minimum, maximum, average);
}
