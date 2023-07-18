#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char* str);

int main(void) 
{
    char buffer[100];
    char* str;

    printf("Enter a sentence: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Remove newline character from the input
    buffer[strcspn(buffer, "\n")] = '\0';

    // Remove spaces and convert all characters to lowercase
    int j = 0;
    for (int i = 0; buffer[i] != '\0'; i++) 
    {
        if (buffer[i] != ' ') 
        {
            buffer[j] = tolower(buffer[i]);
            j++;
        }
    }
    buffer[j] = '\0';

    str = buffer;

    if (isPalindrome(str)) {
        printf("The sequence is a palindrome.\n");
    } else {
        printf("The sequence is not a palindrome.\n");
    }

    return 0;
}

bool isPalindrome(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}


