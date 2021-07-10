/*
Problem:    172. Factorial Trailing Zeroes
Date:       July 11, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/factorial-trailing-zeroes/

Question:
Given an integer n, return the number of trailing zeroes in n!.
Follow up: Could you write a solution that works in logarithmic time complexity?

Example 1:
Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:
Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.

Example 3:
Input: n = 0
Output: 0

Constraints:
0 <= n <= 104
*/


class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        for(int i=5;i<=n;i=i*5){
            ans = ans + n/i;
        }
        return ans;
    }
};
