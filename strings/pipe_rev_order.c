#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to reverse the order of words in a pipe-separated string
void reverseWordsOrder(const char *input) {
    char *words[MAX_WORDS];
    char *token;
    int count = 0;

    // Copy input to avoid modifying it directly
    char *inputCopy = strdup(input);
    if (!inputCopy) {
        perror("Failed to allocate memory");
        return;
    }

    // Tokenize the input string using "|" as the delimiter
    token = strtok(inputCopy, "|");
    while (token != NULL && count < MAX_WORDS) {
        // Allocate memory for each word
        words[count] = strdup(token);
        if (!words[count]) {
            perror("Failed to allocate memory for a word");
            // Free previously allocated memory
            for (int i = 0; i < count; i++) {
                free(words[i]);
            }
            free(inputCopy);
            return;
        }
        count++;
        token = strtok(NULL, "|");
    }

    // Print words in reverse order
    printf("Reversed order of words:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf("|");
        }
        free(words[i]);  // Free the memory allocated for each word
    }
    printf("\n");

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

    reverseWordsOrder(input);

    return 0;
}

