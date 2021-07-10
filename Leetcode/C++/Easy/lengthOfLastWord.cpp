/*
Problem:    58. Length of Last Word
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/length-of-last-word/

Question:
Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.
A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5

Example 2:
Input: s = " "
Output: 0
 
Constraints:
1 <= s.length <= 104
s consists of only English letters and spaces ' '.
*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int len=s.length();
        if(len==0)
            return 0;
        int last=0;
        for(int i=len-1;i>=0;i--){
            if(s[i]!=' ')
                last++;
            else if(s[i]==' ' && last==0)
                continue;
            else
                break;
        }
        return last;
    }
};
