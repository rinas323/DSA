#include<iostream>
using namespace std;

/*
Problem Statement:
Find the k-th smallest element in an array given by the user. 
The array size (n) and elements are taken as input, along with an integer k.

Constraints:
1 <= n <= 10^5 (Size of the array should be within this range)
1 <= k <= n (k should be a valid index in the sorted order)
-10^9 <= arr[i] <= 10^9 (Array elements can be large negative or positive numbers)

Approach:
We will implement a simple selection sort-based approach to find the k-th smallest element
*/

// Function to find the k-th smallest element using selection sort
int FindTheKthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) { 
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // Move the smallest found to the correct position
    }
    return arr[k - 1];  // Returning the k-th smallest element (1-based index)
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    
    if (k > 0 && k <= n) {
        cout << "The " << k << "-th smallest element is: " << FindTheKthSmallest(arr, n, k) << endl;
    } else {
        cout << "Invalid value of k. It should be between 1 and " << n << "." << endl;
    }
    
    return 0;
}

