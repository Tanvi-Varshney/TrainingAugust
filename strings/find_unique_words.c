#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to sort characters of a string
void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if two words are anagrams
int areAnagrams(const char *str1, const char *str2) {
    char sorted1[MAX_WORD_LENGTH], sorted2[MAX_WORD_LENGTH];
    strcpy(sorted1, str1);
    strcpy(sorted2, str2);
    sortString(sorted1);
    sortString(sorted2);
    return strcmp(sorted1, sorted2) == 0;
}

// Function to find unique words
void findUniqueWords(char *words[], int count) {
    int uniqueCount = 0;
    int isAnagram[MAX_WORDS] = {0}; // Track which words are anagrams

    // Check for anagrams
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (i != j && areAnagrams(words[i], words[j])) {
                isAnagram[i] = 1;
                isAnagram[j] = 1;
            }
        }
    }

    // Collect unique words
    printf("Unique words:\n");
    for (int i = 0; i < count; i++) {
        if (!isAnagram[i]) {
            printf("%s\n", words[i]);
            uniqueCount++;
        }
    }

    if (uniqueCount == 0) {
        printf("No unique words found.\n");
    }
}

int main() {
    char *words[MAX_WORDS];
    int count = 0;
    char input[256];

    printf("Enter a list of words (space-separated): ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Tokenize the input string using " " as the delimiter
    char *token = strtok(input, " ");
    while (token != NULL && count < MAX_WORDS) {
        words[count] = strdup(token);
        if (!words[count]) {
            perror("Failed to allocate memory for a word");
            return 1;
        }
        count++;
        token = strtok(NULL, " ");
    }

    // Find and print unique words
    findUniqueWords(words, count);

    // Free allocated memory
    for (int i = 0; i < count; i++) {
        free(words[i]);
    }

    return 0;
}

