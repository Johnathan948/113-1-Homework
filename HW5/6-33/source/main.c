#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int start, int end, int key) {
    // Base case: if start index exceeds end index, the key is not found
    if (start > end) {
        return -1;
    }

    // Calculate the middle index
    int mid = start + (end - start) / 2;

    // Check if the key is at the middle
    if (arr[mid] == key) {
        return mid; // Return the index where the key is found
    }

    // If the key is smaller than the middle element, search the left subarray
    if (key < arr[mid]) {
        return binarySearch(arr, start, mid - 1, key);
    }

    // If the key is larger than the middle element, search the right subarray
    return binarySearch(arr, mid + 1, end, key);
}

int main() {
    // Example sorted array for binary search
    int array[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    // Input: key to search for
    int key;
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(array, 0, size - 1, key);

    // Output the result
    if (result != -1) {
        printf("Element found at index %d.\n", result);
    }
    else {
        printf("Element not found in the array.\n");
    }

    return 0;
}