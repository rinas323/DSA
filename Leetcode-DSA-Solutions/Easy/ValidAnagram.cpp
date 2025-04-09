/*
Problem Statement:
Given two strings s and t, determine if t is an anagram of s.
An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once.

Example:
Input: s = "anagram", t = "nagaram"
Output: true

Input: s = "rat", t = "car"
Output: false

Approach:
- If the lengths of s and t are different, return false.
- Use an unordered_map to count the frequency of characters in s.
- Traverse t and decrease the corresponding character counts.
- If any character count becomes negative or nonzero at the end, return false.
- Otherwise, return true.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

// Function to check if t is an anagram of s
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false; // If lengths differ, not an anagram
    
    unordered_map<char, int> charCount;
    
    // Count frequency of characters in s
    for (char c : s) {
        charCount[c]++;
    }
    
    // Reduce frequency based on t
    for (char c : t) {
        if (charCount[c] == 0) return false; // More occurrences in t than in s
        charCount[c]--;
    }
    
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    
    if (isAnagram(s, t))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;
    
    return 0;
}

