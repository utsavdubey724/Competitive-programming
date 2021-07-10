/*
Problem:    231. Power of Two
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/power-of-two/

Question:
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:
Input: n = 1
Output: true
Explanation: 20 = 1

Example 2:
Input: n = 16
Output: true
Explanation: 24 = 16

Example 3:
Input: n = 3
Output: false

Example 4:
Input: n = 4
Output: true

Example 5:
Input: n = 5
Output: false
 
Constraints:
-2^31 <= n <= 2^31 - 1
*/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        while(n%2==0)
            n/=2;
        return n==1;
    }
};

