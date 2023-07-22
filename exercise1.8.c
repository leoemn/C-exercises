/*Write a C program to sort an array of integers in ascending order using the bubble sort algorithm.*/
#include <stdio.h>

//Functions prototype
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main() 
{
    int arr[] = {1234, 2345, - 5, 10, 25, 10, 0,19, 18, 44};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

//Function to perform the Bubble Sort
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) 
    {
        swapped = 0; //To optimize the algorithm by stopping early if the list is already sorted.

        for (j = 0; j < n - i - 1; j++) 
        {
            //If the current element is greater than the next element, swap them.
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        //If no two elements were swapped in the inner loop, the array is already sorted.
        if (swapped == 0)
        {
            break;
        }
    }

}

//Function to print the array
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
