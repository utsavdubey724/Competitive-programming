/*
Problem:    409. Longest Palindrome
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/longest-palindrome/submissions/

Question:
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

Example 1:
Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.

Example 2:
Input: s = "a"
Output: 1
Example 3:

Input: s = "bb"
Output: 2
 

Constraints:
1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/


class Solution {
public:
    int longestPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=s.length();
        int count=0;
        unordered_map<char,int> myMap;
        for(int i=0;i<n;i++)
            myMap[s[i]]++;
        int ncurr,flag=0;
        for(auto it : myMap){
            ncurr=it.second;
            if(ncurr%2==0)
                count+=ncurr;
            else{
                flag=1;
                ncurr--;
                count+=ncurr;
            }
        }
        if(flag)
            count++;
        return count;
    }
};
