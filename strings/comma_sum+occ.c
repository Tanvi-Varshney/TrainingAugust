#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBERS 100

// Function to parse a comma-separated list of integers into an array
int parseList(char *input, int *output) {
    char *token;
    int count = 0;

    token = strtok(input, ",");
    while (token != NULL && count < MAX_NUMBERS) {
        output[count++] = atoi(token);
        token = strtok(NULL, ",");
    }

    return count; // Return the number of integers parsed
}

// Function to calculate and print N - S for each integer in the first list
void calculateDifference(int *list1, int size1, int *list2, int size2) {
    for (int i = 0; i < size1; i++) {
        int sum = 0;
        for (int j = 0; j < size2; j++) {
            if (list1[i] == list2[j]) {
                sum += list1[i]; // Add the value of N for each occurrence
            }
        }
        printf("%d-%d\n", list1[i], sum);
    }
}

int main() {
    char input1[256], input2[256];
    int list1[MAX_NUMBERS], list2[MAX_NUMBERS];
    int size1, size2;

    // Get the first list of integers
    printf("Enter the first list of integers (comma-separated): ");
    fgets(input1, sizeof(input1), stdin);
    
    // Get the second list of integers
    printf("Enter the second list of integers (comma-separated): ");
    fgets(input2, sizeof(input2), stdin);

    // Parse the lists
    size1 = parseList(input1, list1);
    size2 = parseList(input2, list2);

    // Calculate and print N - S for each integer in the first list
    calculateDifference(list1, size1, list2, size2);

    return 0;
}

