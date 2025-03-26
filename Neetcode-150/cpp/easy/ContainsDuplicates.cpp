/*
Problem Statement:
Given an integer array nums, determine if any value appears at least twice in the array.
Return true if any duplicate exists, otherwise return false.

Example:
Input: nums = [1, 2, 3, 3]
Output: true

Input: nums = [1, 2, 3, 4]
Output: false

Approach:
- Use an unordered_set to track seen numbers.
- Traverse the array, checking if an element already exists in the set.
- If an element is found in the set, return true (duplicate found).
- Otherwise, insert the element into the set.
- If no duplicates are found, return false.
*/

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// Function to check if the array contains duplicate elements
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        // If element is already present, duplicate found
        if (seen.find(num) != seen.end()) {
            return true;
        }
        // Otherwise, insert into the set
        seen.insert(num);
    }
    
    return false; // No duplicates found
}

int main() {
   int n;
   cout<<"enter the size of the array:"<<endl;
   cin>>n;
   cout<<"enter the array elements:"<<endl;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(containsDuplicate(arr)){
    cout<<"the array contains duplicates"<<endl;
  }else{
    cout<<"the array doesnt contains duplicates"<<endl;
  }
    
    return 0;
}

