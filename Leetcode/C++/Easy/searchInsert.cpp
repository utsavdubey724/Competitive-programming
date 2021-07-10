/*
Problem:    35. Search Insert Position
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/search-insert-position/

Question:
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

Example 4:
Input: nums = [1,3,5,6], target = 0
Output: 0

Example 5:
Input: nums = [1], target = 0
Output: 0
 
Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0;
        int last=nums.size()-1;
        int mid;
        while(first<=last){
            mid=(first+last)/2;
            if(nums[mid]>target)
                last=mid-1;
            else if(nums[mid]<target)
                first=mid+1;
            else
                return mid;
        }
        return first;
    }
};
