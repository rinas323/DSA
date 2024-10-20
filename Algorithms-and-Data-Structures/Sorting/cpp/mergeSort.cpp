/*
Merge Sort is a popular sorting algorithm based on the divide-and-conquer paradigm.
 It works by recursively dividing the input array into smaller subarrays until each 
subarray contains a single element, and then merging the subarrays back together in
 a sorted manner.

*/
#include<iostream>
#include<vector>
using namespace std;

// This function merges two sorted subarrays into one sorted array.
// The subarrays are arr[low..mid] and arr[mid+1..high].
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;  // Temporary vector to store merged elements.
    int left = low;    // Starting index of the left subarray.
    int right = mid + 1; // Starting index of the right subarray.
    
    // Merge the two subarrays by comparing elements.
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]); // Pick element from left subarray.
            left++;
        } else {
            temp.push_back(arr[right]); // Pick element from right subarray.
            right++;
        }
    }
    
    // If there are any remaining elements in the left subarray, add them.
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    
    // If there are any remaining elements in the right subarray, add them.
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    // Copy the merged elements back into the original array.
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // Copying from temp to the appropriate position in arr.
    }
}

// This function recursively divides the array into two halves and sorts them.
// arr[low..high] is the subarray to be sorted.
void mergeSort(vector<int> &arr, int low, int high) {
    // Base case: If the array has only one element, it is already sorted.
    if (low == high) {
        return;
    }
    
    // Find the middle point to divide the array into two halves.
    int mid = (low + high) / 2;
    
    // Recursively sort the two halves.
    mergeSort(arr, low, mid);     // Sort the left half.
    mergeSort(arr, mid + 1, high); // Sort the right half.
    
    // Merge the two sorted halves.
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;  // Input the size of the array.
    
    vector<int> arr;  // Vector to store the array elements.
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;  // Input each element of the array.
        arr.push_back(input); // Add the input element to the array.
    }
    
    // Call mergeSort to sort the array.
    mergeSort(arr, 0, n - 1);
    
    // Output the sorted array.
    cout << endl << "Sorted array:" << endl;
    for (int i : arr) {
        cout << i << " ";  // Print each element of the sorted array.
    }
    
    return 0;//main function exit
}
