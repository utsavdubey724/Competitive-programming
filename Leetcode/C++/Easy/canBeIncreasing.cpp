/*
Problem:    1909. Remove One Element to Make the Array Strictly Increasing
Date:       August 05, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/

Question:
Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, or false otherwise. If the array is already 
strictly increasing, return true.

The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).

 
Example 1:
Input: nums = [1,2,10,5,7]
Output: true
Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
[1,2,5,7] is strictly increasing, so return true.

Example 2:
Input: nums = [2,3,1,2]
Output: false
Explanation:
[3,1,2] is the result of removing the element at index 0.
[2,1,2] is the result of removing the element at index 1.
[2,3,2] is the result of removing the element at index 2.
[2,3,1] is the result of removing the element at index 3.
No resulting array is strictly increasing, so return false.

Example 3:
Input: nums = [1,1,1]
Output: false
Explanation: The result of removing any element is [1,1].
[1,1] is not strictly increasing, so return false.

Example 4:
Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is already strictly increasing, so return true.
 

Constraints:
2 <= nums.length <= 1000
1 <= nums[i] <= 1000
*/


class Solution {
public:
    //[105,924,32,968] : Here, exclude 32 and check if new array is strictly increasing, return true
    //[1,2,10,5,7] : Here, exclude 10 and check if new array is strictly increasing, return true
    //If none of both checks returns true, then return false
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return true;
        int idx,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi)
                maxi=nums[i];
            else{
                idx=i;
                break;
            }
        }
        int flag=1;
        maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(i!=idx){
                if(nums[i]>maxi)
                    maxi=nums[i];
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
            return true;
        flag=1;
        maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(i!=idx-1){
                if(nums[i]>maxi)
                    maxi=nums[i];
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
            return true;
        return false;
    }
};
