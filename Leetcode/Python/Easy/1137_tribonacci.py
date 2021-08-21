"""
Problem:    1137. N-th Tribonacci Number
Date:       August 21 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/n-th-tribonacci-number/

Question:
The Tribonacci sequence Tn is defined as follows: 
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.

 
Example 1:
Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

Example 2:
Input: n = 25
Output: 1389537
 

Constraints:
0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.
"""


class Solution:
    def tribonacci(self, n: int) -> int:
        if(n == 0):
            return 0
        if(n < 3):
            return 1
        t0 = 0
        t1 = 1
        t2 = 1
        for i in range(2,n):
            temp = t2
            t2 = t0 + t1 + t2
            t0 = t1
            t1 = temp
        return t2
