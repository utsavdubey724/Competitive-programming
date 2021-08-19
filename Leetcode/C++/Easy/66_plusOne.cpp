/*
Problem:    66. Plus One
Date:       Jan 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/plus-one/

Question:
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Example 2:
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

Example 3:
Input: digits = [0]
Output: [1]
 

Constraints:
1 <= digits.length <= 100
0 <= digits[i] <= 9
*/


namespace{
    class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            int flag=0;
	        for(int i=n-1;i>=0;i--){
                if (digits[i]==9)
                    digits[i]=0;
                else{
                    digits[i]++;
                    flag=1;
                    break;
                }
            }
            if(flag)
                return digits;
            digits[0] =1;
            digits.push_back(0);
            return digits;
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
