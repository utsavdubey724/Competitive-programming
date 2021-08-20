"""
Problem:    7. Reverse Integer
Date:       August 20, 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/reverse-integer/

Question:
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Example 4:
Input: x = 0
Output: 0
 

Constraints:
-2^31 <= x <= 2^31 - 1
"""


class Solution:
    def reverse(self, x: int) -> int:
        flag = 1                    #flag = 1 : positive, 0 : negative
        if(x < 0):
            flag = 0
            x *= -1
        xstr = str(x)
        xstr = xstr[::-1]
        if(flag == 0):
            xstr = "-" + xstr
        revx = int(xstr)
        
        min_range = -pow(2,31)
        max_range = pow(2,31)-1
        
        return 0 if(revx < min_range or revx > max_range) else revx
