#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to reverse a string
void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to reverse each word in a pipe-separated string
void reverseWordsInString(const char *input) {
    char *inputCopy = strdup(input);
    if (!inputCopy) {
        perror("Failed to allocate memory");
        return;
    }

    char *token = strtok(inputCopy, "|");
    char result[MAX_WORDS * MAX_WORD_LENGTH] = "";  // Buffer to hold the final result
    char temp[MAX_WORD_LENGTH];

    while (token != NULL) {
        // Reverse the current word
        strcpy(temp, token);
        reverseString(temp);

        // Append to the result string
        if (strlen(result) > 0) {
            strcat(result, "|");
        }
        strcat(result, temp);

        token = strtok(NULL, "|");
    }

    printf("Reversed words:\n%s\n", result);

    // Free the input copy
    free(inputCopy);
}

int main() {
    char input[256];

    printf("Enter a pipe-separated string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    reverseWordsInString(input);

    return 0;
}

