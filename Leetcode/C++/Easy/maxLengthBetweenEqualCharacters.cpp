/*
Problem:    1624. Largest Substring Between Two Equal Characters
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/largest-substring-between-two-equal-characters/

Question:
Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.
A substring is a contiguous sequence of characters within a string.

Example 1:
Input: s = "aa"
Output: 0
Explanation: The optimal substring here is an empty substring between the two 'a's.

Example 2:
Input: s = "abca"
Output: 2
Explanation: The optimal substring here is "bc".

Example 3:
Input: s = "cbzxy"
Output: -1
Explanation: There are no characters that appear twice in s.

Example 4:
Input: s = "cabbac"
Output: 4
Explanation: The optimal substring here is "abba". Other non-optimal substrings include "bb" and "".
 

Constraints:
1 <= s.length <= 300
s contains only lowercase English letters.
*/


class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int len=s.length();
        if(len<3)
            return 0;
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int left=-1,right,count=0;
        for(int i=0;i<len;i++){
            for(int j=len-1;j>i;j--){
                if(s[i]==s[j]){
                    left=i;
                    right=j;
                    int currmax=right-left-1;
                    if(currmax>count)
                        count=currmax;
                }
            }
        }
        if(left==-1)
            return -1;
        return count;
    }
};
