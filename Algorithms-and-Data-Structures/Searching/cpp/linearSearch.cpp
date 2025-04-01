/*
Understanding Linear Search:
Linear Search is a simple searching algorithm used to find an element in an array.
It works by sequentially checking each element until the desired value is found or the list ends.

How Linear Search Works:
1. Start from the first element of the array.
2. Compare each element with the target value.
3. If a match is found, return the index of the element.
4. If the loop completes without finding the target, return -1.

Time Complexity:
- Best Case: O(1) (Element found at the first position)
- Worst Case: O(n) (Element not found or found at the last position)
- Average Case: O(n) (On average, it takes n/2 comparisons)

Space Complexity:
- O(1) (No extra space required apart from input storage)

When to Use Linear Search:
- When the dataset is small.
- When elements are not sorted.
- When insertion and deletion occur frequently.

C++ Implementation:
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to perform Linear Search
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target element: ";
    cin >> target;
    
    int result = linearSearch(arr, target);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}

