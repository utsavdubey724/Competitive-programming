/*
Problem:    976. Largest Perimeter Triangle
Date:       August 01, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/largest-perimeter-triangle/

Question:
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.

 
Example 1:
Input: n = 2
Output: false
Explantion: 2 has only two divisors: 1 and 2.

Example 2:
Input: n = 4
Output: true
Explantion: 4 has three divisors: 1, 2, and 4.
 

Constraints:
1 <= n <= 10^4
*/


class Solution {
public:
    bool isThree(int n) {
        int divisors=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                divisors++;
            if(divisors>3)
                break;
        }
        if(divisors==3)
            return true;
        return false;
    }
};
