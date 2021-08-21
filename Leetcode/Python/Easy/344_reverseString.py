"""
Problem:    344. Reverse String
Date:       August 21 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/reverse-string/

Question:
Write a function that reverses a string. The input string is given as an array of characters s.

 
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:
1 <= s.length <= 105
s[i] is a printable ascii character.
 

Follow up: Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
"""


class Solution:
    def reverseString(self, s: List[str]) -> None:
        left = 0
        right = len(s) - 1
        while(left < right):
            s[left],s[right] = s[right],s[left]
            left += 1
            right -= 1
    """
    def reverseString(self, s: List[str]) -> None:
        temp = s[::-1]
        s.clear()
        s += temp
    """
