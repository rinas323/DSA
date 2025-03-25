/*
Problem Statement:
Given an array of integers, find the first repeating element in it.
A repeating element is one that appears more than once, and the first repeating element is the one that has the smallest index among all repeating elements.

Example:
Input: arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 5 (since 5 appears twice and has the smallest index among repeating elements)

Approach:
- Use an unordered_map to store the index of the first occurrence of each element.
- Traverse the array, checking if an element has already been seen.
- If a repeating element is found, update the minimum index accordingly.
- If no repeating element is found, return -1.
*/

#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

// Function to find the first repeating element in the array
int firstRepeatingElement(int arr[], int n) {
    unordered_map<int, int> indexMap; // Stores first occurrence index of each element
    int minIndex = INT_MAX; // Keeps track of the smallest index of a repeating element
    
    // Traverse the array and store the first occurrence index of each element
    for (int i = 0; i < n; i++) {
        if (indexMap.find(arr[i]) != indexMap.end()) {
            // Element found again, update minIndex if needed
            minIndex = min(minIndex, indexMap[arr[i]]);
        } else {
            // Store first occurrence index
            indexMap[arr[i]] = i;
        }
    }
    
    // If minIndex remains unchanged, no repeating element was found
    return (minIndex == INT_MAX) ? -1 : arr[minIndex];
}

int main() {
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    int result = firstRepeatingElement(arr, n);
    
    if (result == -1)
        cout << "No repeating element found." << endl;
    else
        cout << "First repeating element: " << result << endl;
    
    return 0;
}

