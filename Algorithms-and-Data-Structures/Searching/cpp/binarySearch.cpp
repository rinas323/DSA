/*
Understanding Binary Search:
Binary Search is an efficient algorithm to find an element in a sorted array.
It works by repeatedly dividing the search space in half until the target element is found or the space is exhausted.

How Binary Search Works:
1. Check the middle element of the array.
2. If the middle element is the target, return its index.
3. If the middle element is greater than the target, search in the left half.
4. If the middle element is smaller than the target, search in the right half.
5. Repeat until the element is found or the range becomes empty.

Time Complexity:
- Best Case: O(1) (Element found at the first check)
- Worst Case: O(log n) (Repeatedly dividing the search space)
- Average Case: O(log n)

Space Complexity:
- O(1) for iterative implementation
- O(log n) for recursive implementation due to function call stack

When to Use Binary Search:
- When the dataset is sorted.
- When fast searching is required.
- When working with large datasets.

C++ Implementation:
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to perform Binary Search (Iterative Approach)
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents integer overflow
        
        if (arr[mid] == target) return mid; // Target found
        else if (arr[mid] < target) left = mid + 1; // Search in right half
        else right = mid - 1; // Search in left half
    }
    return -1; // Target not found
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target element: ";
    cin >> target;
    
    int result = binarySearch(arr, target);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}

