/*Write a C program that calculates the average, maximum, and minimum of a given array of numbers.*/
#include <stdio.h>

int main (void)
{
    int a[] = {4, 56, 6, 10, 11, 25, 0, -5, -25};
    int length = sizeof(a) / sizeof(a[0]);
    int minimum, maximum, sum = 0;
    float average;

    for(int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            minimum = a[i];
            maximum = a[i];
            continue;
        }
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
        sum = a[i] + sum;
    }
    average = (float)sum/ length;
    printf("minimum = %d, maximum = %d, average = %f", minimum, maximum, average);
}

