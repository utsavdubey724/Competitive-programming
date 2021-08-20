"""
Problem:    9. Palindrome Number
Date:       August 20, 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/palindrome-number/

Question:
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.


Example 1:
Input: x = 121
Output: true

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Example 4:
Input: x = -101
Output: false
 

Constraints:
-2^31 <= x <= 2^31 - 1
 
Follow up: Could you solve it without converting the integer to a string?
"""


class Solution:     
    def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        temp = x
        rev = 0
        while(temp != 0):
            rem = temp % 10
            rev = rev*10 + rem
            temp = temp//10
        if(x == rev):
            return True
        return False
    
    """
    def isPalindrome(self, x: int) -> bool:
        xstr = str(x)
        rev = xstr[::-1]
        if(xstr == rev):
            return True
        return False
    """
