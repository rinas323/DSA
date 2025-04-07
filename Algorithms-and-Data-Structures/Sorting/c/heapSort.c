/*
Understanding Heap Sort:
Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure.
It first builds a max-heap from the input data, then repeatedly extracts the maximum
and rebuilds the heap until the array is sorted.

How Heap Sort Works:
1. Build a max-heap from the input array.
2. Swap the first (maximum) element with the last element.
3. Reduce the heap size by one and heapify the root.
4. Repeat steps 2 and 3 until the heap size is 1.

Time Complexity:
- Best Case: O(n log n)
- Worst Case: O(n log n)
- Average Case: O(n log n)

Space Complexity:
- O(1) (Heap Sort is an in-place algorithm)

When to Use Heap Sort:
- When memory usage is a concern.
- When a guaranteed O(n log n) performance is needed.
- When stability is not required (Heap Sort is not stable).

C Implementation:
*/

#include <stdio.h>

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i;         // Initialize largest as root
    int left = 2 * i + 1;    // left child
    int right = 2 * i + 2;   // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Main function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Build a max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
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

    heapSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

