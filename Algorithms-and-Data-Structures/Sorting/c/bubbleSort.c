/*
Understanding Bubble Sort:
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
compares adjacent elements, and swaps them if they are in the wrong order.
This process is repeated until the list is sorted.

How Bubble Sort Works:
1. Start from the first element and compare it with the next.
2. If the current element is greater than the next, swap them.
3. Move to the next pair and repeat the process.
4. Continue the process for the entire array.
5. Repeat the above steps for all elements until the array is sorted.

Time Complexity:
- Best Case: O(n) (When the array is already sorted)
- Worst Case: O(n^2) (When the array is sorted in reverse order)
- Average Case: O(n^2)

Space Complexity:
- O(1) (Since it is an in-place sorting algorithm)

When to Use Bubble Sort:
- When the dataset is small.
- When simplicity is preferred over efficiency.
- When the dataset is nearly sorted.

C Implementation:
*/

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no swaps occurred, the array is already sorted
        if (swapped == 0) break;
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
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}

