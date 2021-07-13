/*
Problem:    1822. Sign of the Product of an Array
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sign-of-the-product-of-an-array/

Question:
There is a function signFunc(x) that returns:
1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.
Return signFunc(product).

Example 1:
Input: nums = [-1,-2,-3,-4,3,2,1]
Output: 1
Explanation: The product of all values in the array is 144, and signFunc(144) = 1

Example 2:
Input: nums = [1,5,0,2,-3]
Output: 0
Explanation: The product of all values in the array is 0, and signFunc(0) = 0

Example 3:
Input: nums = [-1,1,-1,1,-1]
Output: -1
Explanation: The product of all values in the array is -1, and signFunc(-1) = -1
 

Constraints:
1 <= nums.length <= 1000
-100 <= nums[i] <= 100
*/


class Solution {
public:
    int neg=0,zero=0;
    int arraySign(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        for(int i : nums){
            if(i<0)
                neg++;
            else if(i==0)
                zero=1;
        }
        if(zero)
            return 0;
        if(neg%2!=0)
            return -1;
        return 1;
    }
};
