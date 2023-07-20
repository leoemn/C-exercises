#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Structure to store word and its frequency
struct WordFrequency 
{
    char word[100];
    int frequency;
};
bool wordExists(const char* word, struct WordFrequency* words, int count);

int main(void)
{
    char filename[] = "G:\\C\\file1.6.txt";
    FILE* file = fopen(filename, "r");

    if (file == NULL) 
    {
        perror("Could not open the file");
        return 1;
    }

    // Data structure to store words and their frequencies
    struct WordFrequency words[1000];
    int wordCount = 0;
    char word[100];
    int index = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) 
    {
        // Check if the character is a word boundary
        if (isspace(ch) || ispunct(ch)) 
        {
            if (index > 0) 
            {
                word[index] = '\0'; // Null-terminate the word
                index = 0;

                // Convert the word to lowercase (optional)
                for (int i = 0; i < strlen(word); i++) 
                {
                    word[i] = tolower(word[i]);
                }

                // Check if the word already exists in the data structure
                if (wordExists(word, words, wordCount)) 
                {
                    // Increment the frequency if the word already exists
                    for (int i = 0; i < wordCount; i++) 
                    {
                        if (strcmp(word, words[i].word) == 0) 
                        {
                            words[i].frequency++;
                            break;
                        }
                    }
                    break;
                }
                else 
                {
                   // Add the new word to the data structure if it doesn't exist
                    strcpy(words[wordCount].word, word);
                    words[wordCount].frequency = 1;
                    wordCount++;
                }
            }
        }
        else 
        {
            // Append the character to the word
            word[index++] = ch;
        }
    }

    fclose(file);

    // Print the words along with their frequencies
    printf("Word\tFrequency\n");
    for (int i = 0; i < wordCount; i++) 
    {
        printf("%s\t%d\n", words[i].word, words[i].frequency);
    }

    return 0;
}

// Function to check if a word already exists in the data structure
bool wordExists(const char* word, struct WordFrequency* words, int count) 
{
    for (int i = 0; i < count; i++) 
    {
        if (strcmp(word, words[i].word) == 0) 
        {
            return true;
        }
    }
    return false;
}