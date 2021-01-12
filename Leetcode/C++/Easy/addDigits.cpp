/*
Problem:    Add Digits
Date:       Jan 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/add-digits/

Question:
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:
Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/


class Solution {
public:
    /*int addDigits(int num) {
        long sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
            if(num==0 && sum>9){
                num=sum;
                sum=0;
            }
        }
        return sum;
    }*/
    int addDigits(int num) {
        if(num==0)
            return 0;
        if(num%9==0)
            return 9;
        return num%9;
    }
};
