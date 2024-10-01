#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to compare two strings for anagram checking
int areAnagrams(const char *str1, const char *str2) {
    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Create frequency array for characters
    int count[256] = {0}; // Assuming ASCII characters

    // Count characters in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Decrease the count based on str2
    for (int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
        // If count goes negative, they aren't anagrams
        if (count[(unsigned char)str2[i]] < 0) {
            return 0;
        }
    }

    return 1; // They are anagrams
}

// Function to check if all words are anagrams
int checkAllAnagrams(char *words[], int count) {
    for (int i = 1; i < count; i++) {
        if (!areAnagrams(words[0], words[i])) {
            return 0; // Not anagrams
        }
    }
    return 1; // All are anagrams
}

int main() {
    char input[256];
    char *words[MAX_WORDS];
    int count = 0;

    printf("Enter comma-separated words: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Tokenize the input string using "," as the delimiter
    char *token = strtok(input, ",");
    while (token != NULL && count < MAX_WORDS) {
        // Trim spaces from the token
        while (*token == ' ') token++; // Skip leading spaces
        words[count] = strdup(token);
        if (!words[count]) {
            perror("Failed to allocate memory for a word");
            return 1;
        }
        count++;
        token = strtok(NULL, ",");
    }

    // Check if all words are anagrams
    if (checkAllAnagrams(words, count)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    // Free allocated memory
    for (int i = 0; i < count; i++) {
        free(words[i]);
    }

    return 0;
}

