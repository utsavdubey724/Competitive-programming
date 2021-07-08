/*
Problem:    485. Max Consecutive Ones
Date:       July 08, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/max-consecutive-ones/

Question:
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
 
Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
                if(curr>max)
                    max=curr;
            }
            else
                curr=0;
        }
        return max;
    }
};
