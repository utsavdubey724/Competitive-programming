/*
Problem:    1941. Check if All Characters Have Equal Number of Occurrences
Date:       July 25, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

Question:
Given a string s, return true if s is a good string, or false otherwise.
A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

Example 1:
Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.

Example 2:
Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.
 

Constraints:
1 <= s.length <= 1000
s consists of lowercase English letters.
*/


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26);
        int n=s.length();
        for(int i=0;i<n;i++)
            v[s[i]-'a']++;
        int count=v[s[0]-'a'];
        for(int i=1;i<26;i++)
            if(v[i] != count && v[i] != 0)
                return false;
        return true;
    }
    /*bool areOccurrencesEqual(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=s.length();
        unordered_map<char,int> myMap;
        for(int i=0;i<n;i++)
            myMap[s[i]]++;
        int count=myMap[s[0]];
        for(auto it : myMap){
            if(it.second != count)
                return false;
        }
        return true;
    }*/
};
