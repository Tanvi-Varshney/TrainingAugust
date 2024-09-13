#include <stdio.h>

// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    // The index of the last unique element
    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

int main() {
    int arr[] = {4, 3, 2, 4, 1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    bubbleSort(arr, n);

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

