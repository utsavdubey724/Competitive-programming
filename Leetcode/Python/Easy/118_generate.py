"""
Problem:    118. Pascal's Triangle
Date:       August 22 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/pascals-triangle/

Question:
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:
Input: numRows = 1
Output: [[1]]
 

Constraints:
1 <= numRows <= 30
"""


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1]]
        n = 1
        while(n != numRows):
            current = []
            current.append(1)
            for i in range(0,n-1):
                current.append(res[n-1][i] + res[n-1][i+1])
            current.append(1)
            res.append(current)
            n += 1
        return res
