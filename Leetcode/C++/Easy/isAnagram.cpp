/*
Problem:    242. Valid Anagram
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-anagram/

Question:
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
 

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 
Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vs(26);
        int ns=s.length();
        for(int i=0;i<ns;i++)
            vs[s[i] -'a']++;
        
        vector<int> vt(26);
        int nt=t.length();
        for(int i=0;i<nt;i++)
            vt[t[i]-'a']++;
        
        /*for(int i=0;i<26;i++)
            cout<<vs[i]<<" ";
        cout<<endl;
        
        for(int i=0;i<26;i++)
            cout<<vt[i]<<" ";
        cout<<endl;*/
        
        return vs==vt;
    }
};
