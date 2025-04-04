/*
Understanding Selection Sort:
Selection Sort is a simple comparison-based sorting algorithm.
It works by repeatedly finding the minimum element from the unsorted portion
and moving it to the beginning of the array.

How Selection Sort Works:
1. Start from the first element.
2. Find the smallest element in the unsorted portion of the array.
3. Swap it with the first element of the unsorted portion.
4. Move the boundary of the sorted and unsorted portions one step forward.
5. Repeat the process until the entire array is sorted.

Time Complexity:
- Best Case: O(n^2)
- Worst Case: O(n^2)
- Average Case: O(n^2)

Space Complexity:
- O(1) (In-place sorting algorithm)

When to Use Selection Sort:
- When memory write operations are costly (Selection Sort makes the minimum possible number of swaps).
- When working with small datasets.
- When simplicity is preferred over efficiency.

C Implementation:
*/

#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        // Assume the current index has the minimum
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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
    
    selectionSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}

