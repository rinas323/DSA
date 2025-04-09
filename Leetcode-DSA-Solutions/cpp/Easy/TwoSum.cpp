/*
Problem Statement:
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.
Assume each input has exactly one solution, and you may not use the same element twice.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (because nums[0] + nums[1] = 2 + 7 = 9)

Approach:
- Use an unordered_map to store elements and their indices.
- Traverse the array and check if target - nums[i] exists in the map.
- If found, return the indices.
- Otherwise, store the current element with its index in the map.
- This approach achieves O(n) time complexity.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find two indices that sum up to the target
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Stores value -> index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Required pair value
        
        // Check if complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return indices of pair
        }
        
        // Store the current number with its index
        numMap[nums[i]] = i;
    }
    
    return {}; // Return empty if no solution (not expected per problem statement)
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }
    
    return 0;
}

