"""
Problem:    367. Valid Perfect Square
Date:       August 21, 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-perfect-square/

Question:
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.


Example 1:
Input: num = 16
Output: true

Example 2:
Input: num = 14
Output: false
 

Constraints:
1 <= num <= 2^31 - 1
"""


class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        left = 1
        right = num
        while(left <= right):
            mid = left + (right - left) // 2
            check = mid * mid
            if(check == num):
                return True
            elif(check < num):
                left = mid + 1
            else:
                right = mid - 1
        return False    
    """
    def isPerfectSquare(self, num: int) -> bool:
        n = int(sqrt(num))
        if(n * n == num):
            return True
        return False
    """
