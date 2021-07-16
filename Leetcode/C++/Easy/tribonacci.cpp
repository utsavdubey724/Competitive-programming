/*
Problem:    1137. N-th Tribonacci Number
Date:       July 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
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
*/


class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1,temp;
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        for(int i=0;i<n-2;i++){
            temp=a+b+c;
            a=b;
            b=c;
            c=temp;
        }
        return c;
    }
};
