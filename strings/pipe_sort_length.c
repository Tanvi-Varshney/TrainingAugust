#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to compare words by their lengths
int compareByLength(const void *a, const void *b) {
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}

// Function to sort words by length
void sortWordsByLength(const char *input) {
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

    // Sort the words array by length
    qsort(words, count, sizeof(char *), compareByLength);

    // Print sorted words
    printf("Words sorted by length:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
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

    sortWordsByLength(input);

    return 0;
}

