/*Write a C program to convert a decimal number to binary representation.*/
#include <stdio.h>

//Functions prototype.
void DecimaltoBinary(int a);

int main(void)
{
    int a;
    do
    {
        printf("enter a decimal number: ");
        scanf("%d", &a);
    } while (a < 0); //for now I will only handle positive decimal numbers. 
    

    DecimaltoBinary(a);
}

//Function to convert decimal number into binary. 
void DecimaltoBinary(int a)
{
    int binary[64];
    int i = 0, num = a; //I will use num in printf just to make output look little bit better.

    if (a == 0)
    {
        printf("binary representation of 0 is: 0");
        return;
    }

    while (a > 0)
    {
        binary[i] = a % 2;
        a = a / 2;
        i++;   
    }
    printf("Binary representation is of %d is: ", num);
    
    
    for (int j = i - 1 ; j >=0 ; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");
}