/*
Problem:    Sqrt(x)
Date:       Jan 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sqrtx/

Question:
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Example 1:
Input: x = 4
Output: 2

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 


Constraints:
0 <= x <= 231 - 1
*/


class Solution {
public:
    int mySqrt(int x) {                    //Binary Search O(log n)
        if(x<2)
            return x;
        long left=1;
        long right=x;
        while(left<right){
            long mid=(left+right)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                right=mid;
            else{
                    left=mid+1;
            }
        }
        return left-1;
    }
    /*int mySqrt(int x) {
        return pow(x,0.5);
    }*/
};
