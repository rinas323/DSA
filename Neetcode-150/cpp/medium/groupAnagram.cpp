/*
LeetCode - Group Anagrams (C++ Solution with Explanation)

Problem Statement:
Given an array of strings `strs`, group all the anagrams together into sublists.
You may return the output in any order.

Definition:
An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.

Examples:
Input: strs = ["act","pots","tops","cat","stop","hat"]
Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]

Input: strs = ["x"]
Output: [["x"]]

Input: strs = [""]
Output: [[""]]

Approach:
- Use a hash map to group strings by their sorted version.
- Sorted characters of an anagram will act as the key.
- Iterate through the strings and group them in the map.
- Extract the values (grouped anagrams) from the map.

Time Complexity:
- O(N * K log K), where N is the number of strings, and K is the maximum length of a string.
  (Sorting each string takes O(K log K))
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramMap[sortedStr].push_back(str);
    }

    vector<vector<string>> result;
    for (const auto& pair : anagramMap) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    vector<string> strs;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter strings:\n";
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        strs.push_back(temp);
    }

    vector<vector<string>> grouped = groupAnagrams(strs);

    cout << "\nGrouped Anagrams:\n";
    for (const auto& group : grouped) {
        cout << "[ ";
        for (const string& word : group) {
            cout << '"' << word << "" ";
        }
        cout << "]\n";
    }

    return 0;
}
