"""
Problem:    58. Length of Last Word
Date:       August 21 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/length-of-last-word/

Question:
Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 
Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:
1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
"""


class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip().split()
        return len(s[-1])
    
    """
    def lengthOfLastWord(self, s: str) -> int:
        res = 0
        i = len(s) - 1
        while(s[i] == ' '):
            i -= 1
        while(s[i] != ' ' and i >=0):
            res += 1
            i -= 1
        return res
    """
