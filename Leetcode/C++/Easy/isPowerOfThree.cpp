/*
Problem:    326. Power of Three
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/power-of-three/

Question:
Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.

Example 1:
Input: n = 27
Output: true

Example 2:
Input: n = 0
Output: false

Example 3:
Input: n = 9
Output: true

Example 4:
Input: n = 45
Output: false
 
Constraints:

-231 <= n <= 231 - 1
*/


class Solution {
public:
    bool isPowerOfThree(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(n==0)
            return false;
        while(n%3==0){
            n=n/3;
        }
        return n==1;
    }
};
