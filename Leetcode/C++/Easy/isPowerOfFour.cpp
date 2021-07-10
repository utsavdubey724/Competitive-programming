/*
Problem:    342. Power of Four
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/power-of-four/

Question:
Given an integer n, return true if it is a power of four. Otherwise, return false.
An integer n is a power of four, if there exists an integer x such that n == 4x.

Example 1:
Input: n = 16
Output: true

Example 2:
Input: n = 5
Output: false

Example 3:
Input: n = 1
Output: true
 
Constraints:
-2^31 <= n <= 2^31 - 1

Follow up: Could you solve it without loops/recursion?
*/


class Solution {
public:
    bool isPowerOfFour(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(n<=0)
            return false;
        while(n%4==0)
            n/=4;
        return n==1;
    }
};
