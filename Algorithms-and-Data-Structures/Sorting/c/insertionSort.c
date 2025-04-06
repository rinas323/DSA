/*
Understanding Insertion Sort:
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time.
It is much like sorting playing cards in your hands, one card at a time.

How Insertion Sort Works:
1. Start from the second element (index 1).
2. Compare the current element with the previous elements.
3. Shift all larger elements to the right.
4. Insert the current element into its correct position.
5. Repeat the above steps until the array is sorted.

Time Complexity:
- Best Case: O(n) (When the array is already sorted)
- Worst Case: O(n^2) (When the array is sorted in reverse order)
- Average Case: O(n^2)

Space Complexity:
- O(1) (In-place sorting algorithm)

When to Use Insertion Sort:
- When the array is nearly sorted.
- When working with small datasets.
- When a simple and adaptive algorithm is preferred.

C Implementation:
*/

#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

