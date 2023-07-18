/*Write a C program that reads a sentence from the user and counts the number of vowels (a, e, i, o, u) 
  in the sentence.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    int count = 0;
    
    printf("write a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); //Read input from the user using fget() 
    printf("%d", strlen(sentence));
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            count++;
        }
    }
    printf("Number of vowels in the sentence is %d", count);

}
