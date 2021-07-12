/*
Problem:    387. First Unique Character in a String
Date:       July 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/first-unique-character-in-a-string/

Question:
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1
 

Constraints:
1 <= s.length <= 10^5
s consists of only lowercase English letters.
*/


class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int len=s.length();
        int idx=-1;
        unordered_map<char,int> myMap;
        for(int i=0;i<len;i++)
            myMap[s[i]]++;
        for(int i=0;i<len;i++){
            if(myMap[s[i]]==1){
                idx=i;
                break;
            }
        }
        return idx;
    }
};
