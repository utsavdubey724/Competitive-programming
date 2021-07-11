/*
Problem:    1910. Remove All Occurrences of a Substring
Date:       July 11, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

Question:
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.

Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

Example 2:
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
 
Constraints:
1 <= s.length <= 1000
1 <= part.length <= 1000
s and part consists of lowercase English letters.
*/


class Solution {
public:
    string removeOccurrences(string s, string part) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int found;
        int len=part.length();
        string s1;
        while(1){
            found=s.find(part);
            if(found!=string::npos){
                for(int i=0;i<found;i++)
                    s1+=s[i];
                for(int i=found+len;i<s.length();i++)
                    s1+=s[i];
                s=s1;
                s1="";
            }
            else
                break;
        }
        return s;
    }
};
