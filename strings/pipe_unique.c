#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to compare two strings (for qsort)
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to find unique words
void findUniqueWords(const char *input) {
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

    // Sort the words array
    qsort(words, count, sizeof(char *), compare);

    // Print unique words
    printf("Unique words:\n");
    for (int i = 0; i < count; i++) {
        // Skip duplicates
        if (i == 0 || strcmp(words[i], words[i - 1]) != 0) {
            printf("%s\n", words[i]);
        }
        free(words[i]);  // Free the memory allocated for each word
    }

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

    findUniqueWords(input);

    return 0;
}

